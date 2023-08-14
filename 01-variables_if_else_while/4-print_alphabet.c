#include <stdio.h>
/*A program that prints the alphabets 
in lowercase except "q and e"*/

int main(void) {
    char letter;

    for(letter = 'a'; letter <= 'z'; letter++)
        if(letter != 'q' && letter != 'e') {
            putchar(letter);
        }
        
        putchar('\n');
        
    return(0);
}