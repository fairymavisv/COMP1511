// Program which prints a letter depending on the user's request.
// by Bingyu Yang z5328465
//Dec 11th 2022

#include <stdio.h>

int main(void) {

    char is_uppercase;
    printf("Uppercase: ");

    // TODO: scan is_uppercase
    scanf("%c", &is_uppercase);

    int index;
    printf("Index: ");

    // TODO: finish the program
    scanf("%d", &index);
    printf("The letter is ");
    
    
    if (is_uppercase == 'y') {
        char a = 'A';
        a +=  index;     
        printf("%c\n", a);
    } else if (is_uppercase == 'n') {
        char a = 'a';
        a +=  index;     
        printf("%c\n", a);
    }


    return 0;
}