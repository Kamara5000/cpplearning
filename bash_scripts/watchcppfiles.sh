#!/bin/bash

echo "👀 Watching for changes to .cpp files in $(pwd)..."

while true; do
    inotifywait -e modify -e create -e move -e close_write *.cpp
    echo "🔁 Change detected — running convertcpp.sh..."
    ./convertcpp.sh
done