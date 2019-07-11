0x1C. C - Makefiles

Learning Objectives

General

What are make, Makefiles
When, why and how to use Makefiles
What are a rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them


Requirements

General

Allowed editors: vi, vim, emacs
OS: Ubuntu 14.04 LTS
Version of gcc: 4.8.4
Version of make: GNU Make 3.81
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory

Tasks

0. make -f 0-Makefile 
Create your first Makefile.

1. make -f 1-Makefile 
Requirements:

name of the executable: holberton
rules: all

2. make -f 2-Makefile 
Create your first useful Makefile.

3. make -f 3-Makefile 
name of the executable: holberton
rules: all, clean, oclean, fclean, re

variables: CC, SRC, OBJ, NAME, RM

The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files

4. A complete Makefile 
name of the executable: holberton
rules: all, clean, fclean, oclean, re

variables: CC, SRC, OBJ, NAME, RM, CFLAGS

The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail

You are not allowed to have a list of all the .o files

5. Island Perimeter 
Technical interview preparation:

You are not allowed to google anything
Whiteboard first

6. make -f 100-Makefile

