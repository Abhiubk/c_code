#include<stdio.h>
void  rev()
{
    int i, j, k;
    char str[100];
    char rev[100];
    printf("\n\nEnter a string:\t");
    scanf("%s", str);
    printf("The original string is %s\n", str);
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    printf("The reverse string is %s\n", rev);
        printf("---------------------------");
//    getch();
}

//<!khf
