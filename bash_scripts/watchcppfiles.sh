#!/bin/bash
#this script watches all cpp files for any changes and run the convertcpp.sh script

echo "Watching for changes to .cpp files in $(pwd)..."

while true; do
    inotifywait -e modify -e create -e move -e close_write *.cpp
    echo "Change detected — running convertcpp.sh..."
    ./convertcpp.sh
done