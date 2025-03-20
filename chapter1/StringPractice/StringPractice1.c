/*
This program is for studying string function.
Name : 박지훈
ID : 202010653
Date : 2025.03.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s1[60] = "C language is ";
    char s2[60] = "a good programming language.";
    char s3[60];
    char s[4][50];
    int result, i;
    size_t length;

    length = strlen(s1);
    printf("String length : %zu\n", length);
    strcpy_s(s3, sizeof(s3), s1);
    printf(" s3 : %s\n", s3);
    result = strcmp("park", "park");
    printf("result : % d\n", result);
    result = strcmp(s1, s2);
    printf("result : %d\n", result);
    strcat_s(s3, sizeof(s3), s2);
    printf("s3 : %s\n", s3);

    for (i = 0; i < 4; i++) {
        printf("Please, enter a name >> ");
        scanf("%49s", s[i]);
    }

    for (i = 0; i < 4; i++) {
        if (islower(s[i][0])) {
            s[i][0] = toupper(s[i][0]);
        }
    }

    for (i = 0; i < 4; i++) {
        printf("Name is %s\n", s[i]);
    }

    return 0;
}
