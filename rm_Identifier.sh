#!/bin/bash

# Find and delete all files ending with .Identifier in the current directory and subdirectories
find . -type f -name "*.Identifier" -exec rm -f {} \;

echo "Deleted all files ending with .Identifier in the current directory and all subdirectories."