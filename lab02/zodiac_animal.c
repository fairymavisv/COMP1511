// Lab02 Zodic Anamial
// Written by Bingyu Yang (z5328465) 
// on Dec 13th 2022

#include <stdio.h>

// This year corresponds to the Rat.
#define MIN_YEAR 1900

// Enum defining the different zodiac ANIMALS
enum zodiac_animal {
    RAT,
    OX,
    TIGER,
    RABBIT,
    DRAGON,
    SNAKE,
    HORSE,
    GOAT,
    MONKEY,
    ROOSTER,
    DOG,
    PIG
};

int main(void) {
    printf("Enter the year of your birth: ");
    //TODO complete the program:
    int birth;
    scanf("%d", &birth);
    int birth_year = (birth - MIN_YEAR) % 12;
    if (birth_year < 0) {
        birth_year = birth_year + (PIG + 1);
    }

    enum zodiac_animal zodiac = birth_year;

    if (zodiac == RAT) {
        printf("You were born in the year of the Rat!\n");
    } else if (zodiac == OX) {
        printf("You were born in the year of the Ox!\n");
    } else if (zodiac == TIGER) {
        printf("You were born in the year of the Tiger!\n");
    } else if (zodiac == RABBIT) {
        printf("You were born in the year of the Rabbit!\n");
    } else if (zodiac == DRAGON) {
        printf("You were born in the year of the Dragon!\n");
    } else if (zodiac == SNAKE) {
        printf("You were born in the year of the Snake!\n");
    } else if (zodiac == HORSE) {
        printf("You were born in the year of the Horse!\n");
    } else if (zodiac == GOAT) {
        printf("You were born in the year of the Goat!\n");
    } else if (zodiac == MONKEY) {
        printf("You were born in the year of the Monkey!\n");
    } else if (zodiac == ROOSTER) {
        printf("You were born in the year of the Rooster!\n");
    } else if (zodiac == DOG) {
        printf("You were born in the year of the Dog!\n");
    } else if (zodiac == PIG) {
        printf("You were born in the year of the Pig!\n");
    } 

    return 0;
}

