#include <stdio.h>
int main(){
    char str[100], rev[100];
    int i, len = 0;
    printf("Enter string: ");
    gets(str);
    while(str[len] != '\0') len++;
    for(i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    printf("Reversed = %s", rev);
    return 0;
}
