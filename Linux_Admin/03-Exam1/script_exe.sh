#!/bin/bash


mkdir  ~/script_exercise



cd ~/script_exercise



for i in {1..5}
do
    touch "file$i.txt"
done


for file in file*.txt
do
  current_date=$(date +"%Y-%m-%d %H:%M:%S")
  echo "File created on: $current_date" > $file
done


for file in file*.txt
do
    echo "Content of $file"
    cat "$file"
    echo "###################"
done
echo "Script is Done succefully!"

