# learn vscode

vscode can be an ide with cmake. 

## cmake commands

- set debug target
- configure
- build

## debugging

- requires launch target
- how to set it?
  - specify the path to the executable.
  - no easier way for now

## launch 

- .vscode/launch.json

```json
{
  // Use IntelliSense to learn about possible attributes.
  // Hover to view descriptions of existing attributes.
  // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "type": "lldb",
      "request": "launch",
      "name": "Debug",
      "program": "${workspaceFolder}/build/code/log/learn_log",
      "args": [],
      "cwd": "${workspaceFolder}"
    }
  ]
}
```

## CAPSLOCK to CTRL

- essential for vim programmer
- how to do it on Ubuntu?
  - install gnome-tweaks with apt
  - it shows with desktop app. 기능개선
  - additional keys option shows the ctrl key change option
  - and lots more


## shortcuts

https://code.visualstudio.com/shortcuts/keyboard-shortcuts-linux.pdf
- the above link has a useful commands and shortcuts

## cmake sourceDirectory

- restart vscode
- run cmake configure again
- then it is fine 






u


