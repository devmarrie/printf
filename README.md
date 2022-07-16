## Brief Introduction

This project is an illustration of the use of printf function in C ,done by Marriane Akeyo and Joseph Bamisaye who are Software Engineering students at Alx School, as a fullfilment of their understanding of the printf function in C and other topics learnt during the program.

Some of the take aways from this project include:

* What the printf function is ,other programming languages using printf statement.
* How the function can be improved if possible.
* Writting a pseudocode and an algorithim  for a problem.
* Applying variadic functions to big projects

## Defination of the printf function

The printf() is a library function to send formatted output to the screen. The function prints the string inside quotations.To use printf() in our program, we need to include stdio.h header file using the #include <stdio.h> statement. The provided cstring may contain format specifiers( beginning with % in the cstring).

If there are format specifiers, those are replaced with their respective arguments that follow the cstring to the printf call. These format specifiers may also contain its length, precision, and other flags.

**Declaration**

``` int printf(char *format, arg1, arg2, ...);```

**Parameters**

* #### formart:his is the string that contains the text to be written to stdout. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested. Format tags prototype is:

**%[flags][width][.precision][length]specifier**

If the program runs successfully, the return value is the amount of chars printed.

| Specifier | Output              |
| --------- | ------------------- |
| c         | Character           |
| d or i    | Decimal integer     |
| s         | String              |
| b         | Binary              |
| %         | Percentage charater |
| o         | Signed Octal        |
| u         | Unsigned Integer    |
| x         | Unsigned Hexadecimal|
| X         | Unsigned Hexadecimal (uppercase) |
| p         | Pointer address     |
| r         | Reversr string of characters |
| R         | ROT13 translaton of string |
| S         | String with special chars replaced by their ASCII value |

* #### Additional arguments:represented by *args* in the statements above ,each containing one value to be inserted instead of each %-tag specified in the format parameter (if any). There should be the same number of these arguments as the number of %-tags that expect a value.

* #### Return value:If successful, the total number of characters written is returned. On failure, a negative number is returned.

## Examples

* Printing the string of chars "Hello ALX School":*
Input: ```printf("Hello %s", "Enineer");```
Output: ```Hello Engineer```

* Printing an integer number:*
Input:```printf("2 + 2 is equal to %d.", 4);```
Output:```2 + 2 is equal to 4```

* Printing a binary:*
Input : ```printf("98 in binary is [%b]", 98);```
Output:```98 in binary is [1100010]```


## File Functions

### \_printf.c

the function that imitates printf(), by printing data.

---

### main.h

Header file where all Protypes are saved.

---

### man_3_printf

manpage file

---

### parse_char.c

Function that writes the Buffer Character.

    /* Indetifier : %c */

---

### parse_int.c

Function that Prints an Integer.

    /* Indetifier : %i or %d */

---

### parse_string.c

Function that Prints out a String.

    /* Indetifier : %s */

---

### parse_binary.c

Function that Prints a Binary.

    /* Indetifier : %b */

---

### parse_perc.c

Function that Prints a Percentage symbol.

    /* Indetifier : %% */

---
### parse_oct.c

Function that Prints Decimal in Octal.

	/* Indetifier : %o */

---

### parse_hex.c

Function that Prints Decimal in Hexadecimal.

	/* Indetifier : %x */

---

### parse_x_X.c

Function that prints Decimal in Uppercase Hexadecimal.

	/* Indetifier : %X */

---

### parse_unit.c

Function that Prints an Unsigned Integer.

	/* Indetifier : %u */

---

### parse_buff.c

Function that Prints the Buffer

---

### CONTRIBUTION.md

Documentation stating the styleguide on how the work flow was carried out.

---

### .gitignore

Files to be ignored when pushing to github.

---

### project_junkyard

Function files used to run various tests on the \_printf Function.

---







