
0x03. C - Debugging
C
Debugging
 By: Carrie Ybay
 Weight: 1
 Project will start Jul 18, 2023 6:00 AM, must end by Jul 21, 2023 6:00 AM
 Checker was released at Jul 19, 2023 12:00 AM
 An auto review will be launched at the deadline
Resources
Read or watch:

Debugging
Rubber Duck Debugging
Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.



Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is debugging
What are some methods of debugging manually
How to read the error messages
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about
Quiz questions
Question #0
The following code gives this output. What is the error?

carrie@ubuntu:/debugging$ cat main.c                                
#include <stdio.h>                                                                                  

/**                                                                                                 
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
        int i;                                                                                      
        int j;                                                                                      
        int k;                                                                                      

        i = 0;                                                                                      
        j = 1000;                                                                                   
        while (i < j)                                                                               
        {                                                                                           
                k = j / 98;                                                                         
                i = i + k;                                                                          
                printf("%d\n", i);                                                                  
                j == j - 1;                                                                         
        }                                                                                           

        return (0);                                                                                 
}                                                                                                   
carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.
c                                                                                                   
main.c: In function ‘main’:                                                                         
main.c:20:3: error: statement with no effect [-Werror=unused-value]                                 
   j == j - 1;                                                                                      
   ^                                                                                                
cc1: all warnings being treated as errors                                                           
carrie@ubuntu:/debugging$

We want to assign j a new value, not compare it, so it should be j = j - 1 instead of j == j - 1


We want to compare j so we need an if statement before j == j - 1


We don’t need to assign a new value to j because it doesn’t do anything

Question #1
This code doesn’t work as intended.

#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        continue;
                }
                else
                {
                        break;
                }

                printf("%d\n", i);
        }

        return(0);
}
Let’s add printf statements to the code. What information do the printf statements tell us about how our code is executed?

#include "main.h"

/**
* main - prints even numbers from 0 to 100
* Return: 0
*/

int main(void)
{
        int i;

        printf("Before loop\n");

        for (i = 0; i < 100; i++)
        {
                if (i % 2 != 0)
                {
                        printf("i is not even so don't print\n");
                        continue;
                }
                else
                {
                        printf("i is even, break to print\n");
                        break;
                }

                printf("Outside of if/else, still inside for loop\n");

                printf("%d\n", i);
        }

        printf("For loop exited\n");

        return(0);
}

A printf statement shows that there is an infinite loop in the code


A printf statement shows exactly how many times the loop executes


printf statements shows that break will cause “For loop exited” to print, indicating that the even number is never printed


A printf statement shows when the for loop is finished

Question #2
Look at the following code.

carrie@ubuntu:/debugging$ cat main.c                                
#include <stdio.h>                                                                                  

/**                                                                                                 
 * main - debugging example                                                                         
 * Return: 0                                                                                        
 */                                                                                                 
int main(void)                                                                                      
{                                                                                                   
        char *hello = "Hello, World!";                                                              

        for (i = 0; hello[i] != '\0'; i++)                                                          
        {                                                                                           
                printf("%c", hello[i]);                                                             
        }                                                                                           

        printf("\n");                                                                               

        return (0);                                                                                 
}                                                                                                   
carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.
c                                                                                                   
main.c: In function ‘main’:                                                                         
main.c:11:7: error: ‘i’ undeclared (first use in this function)                                     
  for (i = 0; hello[i] != '\0'; i++)                                                                
       ^                                                                                            
main.c:11:7: note: each undeclared identifier is reported only once for each function it appears in
main.c:9:8: error: variable ‘hello’ set but not used [-Werror=unused-but-set-variable]              
  char *hello = "Hello, World!";                                                                    
        ^                                                                                           
cc1: all warnings being treated as errors                                                           
carrie@ubuntu:/debugging$                         
In the main.c file, on what line is the first error that the compiler returns?


11


7


9

Question #3
The following code gives this incorrect output. Which of the following statements about what is causing the error is true?

carrie@ubuntu:/debugging$ cat main.c                               
#include <stdio.h>                                                                                 

/**                                                                                                
 * main - debugging example                                                                        
 * Return: 0                                                                                       
 */                                                                                                
int main(void)                                                                                     
{                                                                                                  
        int i;                                                                                     
        int j;                                                                                     

        for (i = 0; i < 10; i++)                                                                   
        {                                                                                          
                j = 0;                                                                             
                while (j < 10)                                                                     
                {                                                                                  
                        printf("%d", j);                                                           
                }                                                                                  
                printf("\n");                                                                      
        }                                                                                          

        return (0);                                                                                
}                                                                                                  
carrie@ubuntu:/debugging$
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.c                                                                                                  
carrie@ubuntu:/debugging$ ./a.out
0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 <...>
^Ccarrie@ubuntu:/debugging$

j is always equal to i so the loop will never end


j never increments so it is always going to print 0


j never increments so it will always be less than 10

Please make sure to validate all quiz questions before moving on to project tasks
Copyright © 2023 ALX, All rights reserv.
