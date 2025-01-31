# libft

**42 Project**: `libft` - A custom C library that implements various standard library functions, designed to improve understanding of memory management, algorithms, and C language fundamentals.

## Project Overview

The **`libft`** project consists of creating your own custom library of functions that replicate the standard C library functions, along with some additional functions that you'll need for future projects. This library should include various functions for string manipulation, memory allocation, input/output operations, and more. The goal is to create a reliable and reusable collection of functions that can be used across multiple projects.

The implementation of **`libft`** aims to enhance understanding of how standard C functions are implemented and to practice working with pointers, memory management, and low-level programming.

## Features

- Implements standard C functions from `string.h`, `stdlib.h`, `unistd.h`, and `stdio.h`.
- Provides essential functions for memory allocation, string manipulation, and input/output.
- Functions can be reused in future projects like **`get_next_line`**, **`push_swap`**, and others.
- Designed with modularity, ensuring that the library is efficient and optimized.
- Carefully manages memory to avoid leaks and ensure robust performance.

## List of Functions

The `libft` project should implement the following categories of functions:

### 1. **Memory Management Functions**:
- `ft_memset` - Sets a block of memory with a specific value.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_memcpy` - Copies memory from one location to another.
- `ft_memccpy` - Copies memory with a check for a specific byte.
- `ft_memmove` - Moves memory, handling overlapping regions.
- `ft_memchr` - Finds a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.

### 2. **String Functions**:
- `ft_strlen` - Returns the length of a string.
- `ft_strdup` - Duplicates a string.
- `ft_strcpy` - Copies a string.
- `ft_strncpy` - Copies a specified number of characters from one string to another.
- `ft_strcat` - Concatenates two strings.
- `ft_strncat` - Concatenates two strings with a limit on the number of characters.
- `ft_strcmp` - Compares two strings.
- `ft_strncmp` - Compares two strings with a limit on the number of characters.
- `ft_strchr` - Finds a character in a string.
- `ft_strrchr` - Finds the last occurrence of a character in a string.
- `ft_strstr` - Finds the first occurrence of a substring.
- `ft_strnstr` - Finds the first occurrence of a substring with a limit on the number of characters.
- `ft_strsplit` - Splits a string into an array of substrings based on a delimiter.

### 3. **Character Functions**:
- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isascii` - Checks if a character is an ASCII character.
- `ft_isprint` - Checks if a character is printable.
- `ft_toupper` - Converts a character to uppercase.
- `ft_tolower` - Converts a character to lowercase.

### 4. **Memory Allocation Functions**:
- `ft_memalloc` - Allocates memory and initializes it to zero.
- `ft_memdel` - Frees allocated memory.
- `ft_strnew` - Allocates a new string with a specified length.
- `ft_strdel` - Frees a string.
- `ft_strclr` - Clears a string (sets all characters to `\0`).
- `ft_striter` - Applies a function to each character of a string.
- `ft_striteri` - Applies a function to each character of a string, with its index.
- `ft_strmap` - Applies a function to each character of a string and returns a new string.
- `ft_strmapi` - Applies a function to each character of a string with its index and returns a new string.

### 5. **Linked List Functions** (if applicable):
- `ft_lstnew` - Creates a new linked list node.
- `ft_lstdel` - Deletes a linked list node.
- `ft_lstdelone` - Deletes a single linked list node.
- `ft_lstadd` - Adds a new node at the beginning of the list.
- `ft_lstiter` - Applies a function to each node of the linked list.
- `ft_lstmap` - Creates a new linked list by applying a function to each node.

### 6. **Other Utility Functions**:
- `ft_putchar` - Outputs a single character.
- `ft_putstr` - Outputs a string.
- `ft_putendl` - Outputs a string followed by a newline.
- `ft_putnbr` - Outputs an integer.
- `ft_atoi` - Converts a string to an integer.

## Getting Started

To use the `libft` library, you can clone the repository and include the necessary `.c` and `.h` files in your project.

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/aybouatr/libft.git
   cd libft
