# own-shell (v1)

A minimal shell written in **C**, capable of running basic system commands (e.g., `ls`, `pwd`, `echo`, etc.) as well as a few built-in commands (`env`, `exit`).  

---

## 🚀 Compilation

The project includes a `Makefile`. To build:

```bash
make
```

This will generate an executable named shell.

Run the shell like any other program with:

```bash
./shell
```

Inside the shell you can execute commands just like in a regular terminal:
```bash
$ ls -l
$ pwd
$ env
$ exit
```

📌 Versions

v1 (current) → Supports execution of basic commands and some builtins (env, exit).

v2 (upcoming) → Will add support for pipes (|), allowing commands to be chained together, e.g.:
