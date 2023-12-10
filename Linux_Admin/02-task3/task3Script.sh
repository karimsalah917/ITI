#!/bin/bash

bashrc_check="$HOME/.bashrc"

if [ -f "$bashrc_check" ]; then
    echo 'export HELLO=$HOSTNAME' >> "$HOME/.bashrc"
    echo 'LOCAL=$whoami' >> "$HOME/.bashrc"
gnome-terminal -- bash -c 'echo "Script is done!"; read -p "Press Enter to close" -n 1 -r'

echo "script is made by karim salah with a little help of chatgpt :)"

    
else
gnome-terminal -- bash -c 'echo "fatal! script is not done! Check the log file for error"; read -p "Press Enter to close" -n 1 -r'
touch error_log.txt
2>&1 >> error_log.txt
fi

