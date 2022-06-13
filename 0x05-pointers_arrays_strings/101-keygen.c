#include <stdio.h> 
 #include <stdlib.h> 
 #include <time.h> 
  
 /** 
 * main - Entry point 
 * Return: return 0 
 */ 
 int main(void) 
  { 
          int contador; 
          int  checksum; 
          int  aleatorio; 
  
         srand(time(NULL)); 
         checksum = 2772; 
         contador = 0; 
  
         while (checksum > 122) 
         { 
                 aleatorio = (rand() % 100); 
                 printf("%c", aleatorio); 
                 checksum -= aleatorio; 
                 contador++; 
         } 
         printf("%c", checksum); 
         return 0; 
  }
