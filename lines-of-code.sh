#!/bin/bash

current_datetime=$(date +"%Y-%m-%d %H:%M:%S")

dev_log_dir="./dev_logs/"
file_name="$dev_log_dir$(date +"%Y-%m-%d").txt"
readme="README.md"
mkdir -p $dev_log_dir

# shellcheck disable=SC2129
echo "$current_datetime" >> "$file_name"

find . -path ./cmake-build-debug -prune -o -name '*.cpp' -print0 | xargs -0 wc -l >> "$file_name"
find . -path ./cmake-build-debug -prune -o -name '*.h' -print0 | xargs -0 wc -l >> "$file_name"


find . -path ./cmake-build-debug -prune -o -name '*.cpp' -print0 | xargs -0 wc -l > "$readme"
find . -path ./cmake-build-debug -prune -o -name '*.h' -print0 | xargs -0 wc -l >> "$readme"


echo "-------------------" >> "$file_name"
echo "-------------------" >> "$readme"