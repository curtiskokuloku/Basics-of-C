// Switch statements allow us to compare one value to multiple values
// makes it easy because of cases

#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    printf("Enter a grade: ");
    scanf("%c", &grade);
    
    switch(grade) { // value you are comparing going into the parenthesis

        case 'A':   // in the case that the character is A
            printf("Amazing job!\n");
            break;  // break indicates we want to exit the switch statement
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Poor Job!\n");
            break;
        case 'D':
            printf("Keep your head up. Could be worse!\n");
            break;
        case 'F':
            printf("You failed. Try again!\n");
            break;
        default:    // default case in case no other case is matched
            printf("Invalid grade\n");
    }

    return 0;
}