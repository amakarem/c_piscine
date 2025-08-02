
# 📘 C Piscine — 42 School Projects

A collection of programming exercises from the **C Piscine** at *42 School*, organized by module (Shell00, C00...C07, Rush*, etc.). Each folder contains solutions to the official subjects in C and Shell, following the 42 project's requirements.

---

## 🧠 Overview

- Intensive 4‑week bootcamp-style learning experience focused on:
  - **C programming**: variables, pointers, memory, structs, dynamic allocation, recursion, libraries, Makefiles.
  - **Shell scripting**: Unix command line essentials, scripting for automation.
  - **Git workflow**: submission via Git, peer-to-peer code reviews, and self‑driven progress.
- Includes “Rush” weekend team projects to practice collaboration under time constraints.

---

## 🚀 Modules (structure & status)

| Module     | Description                        | Status     |
|------------|------------------------------------|------------|
| Shell00    | Basic shell scripting tasks        | ✅ completed|
| Shell01    | Intermediate shell exercises       | ✅ completed|
| C00–C07    | Sequential C programming projects  | In progress / ✔‑grade based |
| Rush00–02  | Weekend collaborative coding sprints | Optional / submission-based |

*(Adjust the status column with grades or completion ✔ as appropriate.)*

---

## 🛠️ Getting Started

### Clone the repository

```bash
git clone https://github.com/amakarem/c_piscine.git
cd c_piscine
```

### Folder and project structure

Each module resides in its own folder (e.g. `C00/ex00/`, `Shell01/ex03/`). Inside, you should find:

- `exNN.c` (or shell scripts)
- Optionally `main.c` for local testing
- `Makefile` or compilation hints in the README of each folder

### Compilation & Norm checks

To compile:

```bash
cc -Wall -Wextra -Werror exNN.c
```

To check coding style using Norminette:

```bash
norminette exNN.c
```

---

## 📚 Usage

- Browse module folders and open exercise `.c` or `.sh` files.
- Review or run the `main.c` test programs (if included).
- Edit code to experiment or refactor with stylistic corrections.
- Use `norminette` to ensure each file meets the 42 coding standard.
- Try running automated tests where provided.

---

## ✅ Learning Tips

- **No cheating**: attempt to solve before inspecting working solutions.
- **Self‑learning**: build your understanding by writing from scratch, referring only when stuck.
- **Persistence**: skip problems that block you; revisit them after moving on.
- Daily practice pays off.

---

## 🔧 Tools & Environment

- Language: **C** (ISO C99 or later)
- Shell scripting for early modules
- Must submit via `git push` following 42 standards
- Optional tools include:
  - `norminette` for style checks
  - custom scripts or `MiniMoulinette` assignment submission

---

## 📖 Credits & Resources

- Based on 42 School curriculum — projects provided by the 42 intranet
- Contains personal solutions and notes organized by module
- Useful references:
  - [Norminette documentation]
  - [42 intranet subject PDFs]

---

## 📝 License

This repository is for personal educational use. Use at your own risk; not intended for commercial purposes. Feel free to adapt or learn from content with proper attribution.

---

## 🧭 Final Thoughts

Welcome to your C Piscine wall of challenges! Whether you're brushing up on fundamentals or pushing through complex tasks, this collection represents a journey through learning, perseverance, and code clarity. Happy coding!
