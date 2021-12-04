#include<stdio.h>
#include<string.h>

int dupstrcmp(char string1[], char string2[])
{
    int i = 0, flag = 0, len, leng;
    len = strlen(string1);
    leng = strlen(string2);
    if (len == leng)
    while (string1[i] != '\0')
    { 
        if (string1[i] != string2[i])
        {   
            flag = 1;
            break;
        }
        i++;
    }
    else 
        flag = 1;
    return(flag);
}
void main()
{
    char line[10], name[10];
    scanf("%s", name);
    scanf("%s", line);
    int result = dupstrcmp(name, line);
    if (result == 0)
        printf("Are equal\n");
    else 
        printf("Are not equal\n");
}