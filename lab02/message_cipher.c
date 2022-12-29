// Message Cipher
// message_cipher.c
//
// This program was written by Bingyu Yang (z5328465)
// on Dec 14th 2022
//
// char addition and subtractions
#include <stdio.h>
#define UP_MIN 64
#define UP_MAX 91
#define LOW_MIN 96
#define LOW_MAX 123
struct message {
    char letter1;
    char letter2;
    char letter3;
    char letter4;
};

// You may find it helpful to add extra procedures here. Procedures that
// encipher/decipher the entire `msg` may be useful.
//
// Likewise, procedures that encipher/decipher single letters will help reduce
// code repetition. It is completely up to you whether to create these
// procedures, but we *highly* recommend you do for practice!

//addition of char
char encode_character(char ch, int num) {
    char answer;
    //lowercase addition
    if (LOW_MIN < ch && ch < LOW_MAX) {
        answer = ((ch - LOW_MIN) + (num % 26)) % 26 + LOW_MIN;
        printf("%d\n", answer);
        return answer;
    }
    //uppercase addition
    if (UP_MIN < ch && ch < UP_MAX) {
        answer = ((ch - UP_MIN) + (num % 26)) % 26 + UP_MIN;
        return answer;
    }
    
}

//subtraction of char
// char decode_character(char ch, int num) {
//     char answer;
    
//     return answer;
// }
// Determines cyphering for a given msg and prints out the result
void determine_ciphering(struct message msg) {

    // TODO: Complete this procedure. This IS needed to compile your program.
    char input_ch;
    int num1, num2, num3, num4;
    struct message reply;

    printf("Would you like to encipher or decipher this message (e/d)? ");
    scanf(" %c", &input_ch);
    if (input_ch == 'e') {
        printf("Enter numbers to encipher by: ");
        scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
        reply.letter1 = encode_character(msg.letter1, num1);
        reply.letter2 = encode_character(msg.letter2, num2);
        reply.letter3 = encode_character(msg.letter3, num3);
        reply.letter4 = encode_character(msg.letter4, num4);
        printf("%c%c%c%c\n", reply.letter1, reply.letter2, reply.letter3, reply.letter4);
        
    } //else if (input_ch == 'd') {
    //     printf("Enter numbers to decipher by: ");
    //     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    //     reply.letter1 = decode_character(msg.letter1, num1);
    //     reply.letter2 = decode_character(msg.letter2, num2);
    //     reply.letter3 = decode_character(msg.letter3, num3);
    //     reply.letter4 = decode_character(msg.letter4, num4);
    //     printf("%c%c%c%c\n", reply.letter1, reply.letter2, reply.letter3, reply.letter4);
    // }
}

////////////////////////////////////////////////////////////////////////////////
///////////////////// DO NOT EDIT THIS MAIN FUNCTION ///////////////////////////
////////////////////////////////////////////////////////////////////////////////
// This main function scans a message and then calls your determine_ciphering
// procedure, passing in the message.
int main(void) {
    struct message msg;
    
    // Scan message into `msg` struct
    printf("Message: ");
    scanf(
        "%c %c %c %c",
        &msg.letter1, &msg.letter2, &msg.letter3, &msg.letter4
    );

    // Call your determine_ciphering function and pass in the message.
    determine_ciphering(msg);
}
