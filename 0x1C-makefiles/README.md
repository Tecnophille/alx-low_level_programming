## 0x1C. C - Makefiles


**0-Makefile:** Creating your first Makefile.
Requirements:
name of the executable: school.
rules: all.
The all rule builds your executable.
variables: none.


**1-Makefile:** Requirements:
name of the executable: school.
rules: all.
The all rule builds your executable.
variables: CC, SRC.
CC: the compiler to be used.
SRC: the .c files.


**2-Makefile:** Create your first useful Makefile.
Requirements:
name of the executable: school.
rules: all.
The all rule builds your executable.
variables: CC, SRC, OBJ, NAME.
CC: the compiler to be used.
SRC: the .c files.
OBJ: the .o files.
NAME: the name of the executable.
The all rule should recompile only the updated source files.
You are not allowed to have a list of all the .o files.


**3-Makefile:** Requirements:
name of the executable: school.
rules: all, clean, oclean, fclean, re.
all: builds your executable.
clean: deletes all Emacs and Vim temporary files along with the executable.
oclean: deletes the object files.
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files.
re: forces recompilation of all source files.
variables: CC, SRC, OBJ, NAME, RM.
CC: the compiler to be used.
SRC: the .c files.
OBJ: the .o files.
NAME: the name of the executable.
RM: the program to delete files.
The all rule should recompile only the updated source files.
The clean, oclean, fclean, re rules should never fail.
You are not allowed to have a list of all the .o files.


**4-Makefile:** Requirements:
name of the executable: school.
rules: all, clean, fclean, oclean, re.
all: builds your executable.
clean: deletes all Emacs and Vim temporary files along with the executable.
oclean: deletes the object files.
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files.
re: forces recompilation of all source files.
variables: CC, SRC, OBJ, NAME, RM, CFLAGS.
CC: the compiler to be used.
SRC: the .c files.
OBJ: the .o files.
NAME: the name of the executable.
RM: the program to delete files.
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic.
The all rule should recompile only the updated source files.
The clean, oclean, fclean, re rules should never fail.
You are not allowed to have a list of all the .o files.


**5-island_perimeter.py:** Technical interview preparation:
Creating a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
grid is a list of list of integers:
0 represents a water zone.
1 represents a land zone.
One cell is a square with side length 1.
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100.
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:
First line contains #!/usr/bin/python3.
You are not allowed to import any module.
Module and function must be documented.


**100-Makefile:** Requirements:
name of the executable: school.
rules: all, clean, fclean, oclean, re.
all: builds your executable.
clean: deletes all Emacs and Vim temporary files along with the executable.
oclean: deletes the object files.
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files.
re: forces recompilation of all source files.
variables: CC, SRC, OBJ, NAME, RM, CFLAGS.
CC: the compiler to be used.
SRC: the .c files.
OBJ: the .o files.
NAME: the name of the executable.
RM: the program to delete files.
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic.
The all rule should recompile only the updated source files.
The clean, oclean, fclean, re rules should never fail.
You are not allowed to have a list of all the .o files.
You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable.
You are not allowed to use the string $(CC) more than once in your Makefile.
You are only allowed to use the string $(RM) twice in your Makefile.
You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable).
You are not allowed to have an $(OBJ) rule.
You are not allowed to use the %.o: %.c rule.
Your Makefile should work even if there is a file in the folder that has the same name as one of your rule.
Your Makefile should not compile if the header file m.h is missing.
