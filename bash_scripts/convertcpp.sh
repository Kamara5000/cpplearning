#!/bin/bash

USERNAME="ubuntu"

echo "Cleaning and compiling all .cpp files in $(pwd)..."

for file in *.cpp; do
    echo "Processing $file..."

    # Ensure file is writable and owned by the correct user
    sudo chmod u+w "$file"
    sudo chown "$USERNAME":"$USERNAME" "$file"

    # Create a clean version with Unix line endings
    CLEANFILE="clean_${file}"
    tr -d '\r' < "$file" > "$CLEANFILE"

    echo "Line endings cleaned → $CLEANFILE"

    # Compile the clean file
    EXECUTABLE="${file%.cpp}"
    g++ "$CLEANFILE" -o "$EXECUTABLE"

    if [ $? -eq 0 ]; then
        echo "Compilation successful → Running $EXECUTABLE..."
        ./"$EXECUTABLE"
    else
        echo "Compilation failed for $file"
    fi

    # Clean up the temporary clean file
    rm "$CLEANFILE"
    echo "Removed temporary file $CLEANFILE"

    echo "--------------------------------------"
done

echo "All .cpp files processed and cleaned."