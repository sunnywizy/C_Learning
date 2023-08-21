#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';

   printf("Address of 'cc': %p\n", &cc);
   printf("Value of 'ccc': %c\n", ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   modif_my_char_var(p, c);
   printf("Address of 'p': %p\n", &p);
   printf("Value of 'c': %c\n", c);
   return (0);
}