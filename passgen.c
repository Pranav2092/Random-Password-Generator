#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

void main()
{
    srand((unsigned int)(time(NULL)));
    system("cls");
    int t = 0;
    int q = 0;
    int r = 0;
    int o = 0;
    int b = 0;
    printf("\t\t\t\tPASSWORD\tGENERATOR\n");
    char l[26] = "abcdefghijklmnopqrstuvwxyz";
    char u[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char n[10] = "0123456789";
    char s[11] = "!@#$^&*_><|";
    char *p;
    p = (char*)malloc(sizeof(char) * 15);
    int i = 0;
    printf("\nPassword Suggestion\n");
    while(i<15)
    {
        t = (rand())%4;
        if(t == 0)
        {
            q = (rand())%26;
            p[i] = l[q];
            printf("%c",p[i]);
        }
        else if (t == 1)
        {
            r = (rand())%26;
            p[i] = u[r];
            printf("%c",p[i]);
        }
        else if (t == 2)
        {
            o = (rand())%10;
            p[i] = n[o];
            printf("%c",p[i]);
        }
        else if (t == 3)
        {
            b = (rand())%11;
            p[i] = s[b];
            printf("%c",p[i]);
        }
        i++;
    }
    free(p);
}