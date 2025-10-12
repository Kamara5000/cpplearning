#!/bin/bash

#this bash script can be run on a linux machine to Ensuring cross-platform compatibility (especially cleaning up Windows line endings).
#Automating compilation and testing of multiple C++ files.
#Maintaining proper file permissions and ownership in shared or multi-user environments.
#this wwas needed because my IDE is on window machine while i run the script on a linux machine on AWS and will need to convert from windows CRLF (Carriage Return + Line Feed) to linux LF (Line Feed) 


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