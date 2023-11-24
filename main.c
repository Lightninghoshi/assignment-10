#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{   char strings[3][30];
    char first[30],last[30],result[60];

    //Input strings
    for (int i = 0; i < 3; i++) {
        printf("Enter string %d:",i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);

        if (strings[i][strlen(strings[i]) - 1] =='\n') {
            strings[i][strlen(strings[i])-1] ='\0';
        }
    }

    //first string
    strcpy(first, strings[0]);
    for(int i = 1; i < 3; i++) {
        if(strcmp(first, strings[i]) > 0){
            strcpy(first, strings[i]);
            printf("\nFirst string is %s\n",first);
        }
    }

    //last string
    strcpy(last, strings[0]);
    for (int i = 1; i < 3; i++) {
        if (strcmp(last, strings[i]) < 0) {
            strcpy(last, strings[i]);
            printf("Last string is %s\n\n",last);
        }
    }

    //Concatenate
    strcpy(result, first);
    strcat(result, last);
    printf("Concatenated string in reverse:");
    for (int i = strlen(result) - 1; i >= 0; i--) {
        printf("%c",result[i]);
    }

    //vowels
    printf("\nCapitalized vowels:");
    for (int i = 0; i < strlen(result); i++) {
        char c = result[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c", toupper(c));
            } else {
                printf("%c",c);
            }
    }

    return 0;
}
