#include <stdio.h>
#include <string.h>

int main() 
{
    char str[9];
    int len, i, lowercase=0, uppercase=0, number=0, special=0;

    printf("Enter a string of 8 characters: ");
    scanf("%s", str);

    len = strlen(str);
    if (len != 8) 
    {
        printf("Please ensure string length as 8 characters\n");
        return 1;
    }

 
    for (i = 0; i < len; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            lowercase = 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            uppercase = 1;
        }
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            number = 1;
        }
        else 
        {
            special = 1;
        }
    }
    
    if (!lowercase || !uppercase || !number || !special) {
        printf("String is not as per requirement.\n");
        return 1;
    }
    return 0;
}
