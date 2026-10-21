#include "libft.h"

int ft_isascii(int c) 
{
     if (c >= 0 && c <= 127)
          return (1);
     else
          return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (isascii(c)) 
//     {
//         printf("The character '%c' is an ASCII character.\n", c);
//     } 
//     else 
//     {
//         printf("The character '%c' is not an ASCII character.\n", c);
//     }
    
//     return 0;
// }

//                                           TEST
// {
    //     if (isascii(c)) 
    //     {
        //         printf("The character '%c' is an ASCII character.\n", c);
        //     } 
        //     else 
        //     {
            //         printf("The character '%c' is not an ASCII character.\n", c);
            //     }
            //     return 0;
            
            // int main(int argc, char  **argv)
            // {
            //     if (argc != 2) 
            //     {
            //         if (argv[0] == isascii)
            //         {
            //             printf("The character '%c' is an ASCII character.\n", c);
            //         }
            //         else
            //         {
            //             printf("The character '%c' is not an ASCII character.\n", c);
            //         }
            //         return 0;
            //     }
            //     else
            //     return 0;
            // }
            
// }