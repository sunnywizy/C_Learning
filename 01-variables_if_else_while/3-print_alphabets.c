#include <stdio.h>
/*A program that prints the
alphabets in lowercase, and in uppercase*/
int main(void) {
    char small_letter;
    char big_letter;

    for(small_letter = 'a'; small_letter <= 'z'; small_letter++)
        putchar(small_letter);

    for(big_letter = 'A'; big_letter <= 'Z'; big_letter++)
        putchar(big_letter);

    putchar('\n');

    return(0);

}