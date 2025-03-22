# 🏗️ Libft - Custom C Library (42 School)

##  Overview  

**Libft** is a project at **42 School** that consists of re-implementing functions from the **C standard library**. The goal is to gain a deeper understanding of **memory management, pointers, and data structures**, while creating a **reusable** and **efficient** library for future projects.  

## Features  

- Custom implementation of **standard C library functions** (e.g., `strlen`, `memset`, `strcpy`).  
- Bonus **utility functions** to extend C capabilities (list/structure function).  
- Organized and structured **Makefile** for easy compilation.  

---

##  Installation & Usage  

###  **Compiling Libft** 

To compile the **libft** library, use the **Makefile**:  


<pre>
make          # Compiles libft.a  
make clean    # Removes object files  
make fclean   # Removes object files and the library  
make re       # Recompiles everything  
</pre>

After compilation, a static library libft.a will be generated.

2️⃣ Using Libft in Your Own Project
To use libft in another project:

Copy or clone libft inside your project directory.

Add the following lines to your Makefile to compile and link libft with your project:

# Makefile example for another project

To use **libft** in another project, you need to compile it and link it with your program. The following **Makefile** snippet ensures that `libft.a` is built before compiling your own project:  
<pre>
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT)
	$(CC) $(CFLAGS) main.c -L$(LIBFT_DIR) -lft -o my_program

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)

fclean:
	make fclean -C $(LIBFT_DIR)

re: fclean all

</pre>

Include libft.h in your source files:

<pre>
#include "libft.h"

int main()
{
    char str[] = "Hello, Libft!";
    int len = ft_strlen(str);
    printf("Length: %d\n", len);
    return (0);
}
</pre>


# Notes
The library follows the 42 School coding style.

No external libraries are used.

This project helps in understanding low-level programming.
