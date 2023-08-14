#include <stdio.h>
/*A program that prints the 
alhabet in lowercase*/
int main(void) {
    char word;
    for(word = 'a'; word <= 'z'; word++) 
        putchar(word);

    putchar('\n');
    
    return(0);
}