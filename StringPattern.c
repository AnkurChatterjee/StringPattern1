#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
int main()
{
    char str[MAX], w[30],*ptr;
    int i,j;
    printf("Enter a line of text: ");
    gets(str);
    for(i=0,ptr=str;*ptr!='\0';ptr++,i++)
    {
        if(*ptr!=' ')
        {
            for(j=0;j<=i;j++)
                w[j]=*ptr;
            w[j]='\0';
            puts(w);
        }
        else
            i--;
    }
    printf("\nPress any key to exit: ");
    getch();
}
