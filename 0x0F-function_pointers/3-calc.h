 Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
  Function pointers$ ./calc 1 + 1
2
Function pointers$ ./calc 97 + 1
98
 Function pointers$ ./calc 1024 / 10
102
 Function pointers$ ./calc 1024 '*' 98
100352
Function pointers$ ./calc 1024 '\*' 98
Error
Function pointers$ ./calc 1024 - 98
926
 Function pointers$ ./calc 1024 '%' 98
44
 Function pointers$
