
# 📜 Minishell 1📜
![Logo](https://camo.githubusercontent.com/08d0138e27320a2da12d68daa26dcbbe0e7deddd3eda536f405c0dab2beefb00/68747470733a2f2f692e696d6775722e636f6d2f3236596f4b6e382e706e67)


## :rocket: Introduction

You have to program a UNIX command interpreter.
The interpreter is expected to display a prompt ( $> , for example) and then wait for you to write a command
line, which must be validated by a newline.
The prompt must be displayed again only after the command execution.
Only basic command lines are expected to executed; no pipes, redirections or any other advanced features.
The executables should be those found in the path, as indicated in the PATH variable.

If the executable cannot be found, you must display an error message and display the prompt again.
Errors must be dealt with and must display the appropriate message on the error output.

You must correctly handle the PATH and the environment (by copying and restoring the initial env).

You must implement the following builtins: cd, setenv, unsetenv, env, exit.
Your env builtin hasn’t to take any argument. Your unsetenv builtin hasn’t to support the “*” wildcard.
## 📖 Documentation
    Start the shell :
        ./mysh

## :pencil2: Authors

    [@romaincollignon](https://github.com/romaincollignon)


## :office: Used By

    This project is used by the following companies:

        - Epitech technologie


## :computer: Langage

    **Client:** C, Makefile

