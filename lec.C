#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j;
    char str[10][50], temp[50];

    printf("Enter 10 words:\n");

    for(i=0; i<10; ++i)
        scanf("%s[^\n]",str[i]);
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=0; i<10; ++i)
    {
        puts(str[i]);
    }

   getch();
}
