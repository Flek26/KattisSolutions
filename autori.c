#include <stdio.h>
#include <string.h>

int main(){
    int len, i;
    char string[100];
    scanf("%s", string);
    len = strlen(string);
    for (i = 0; i < len; i++)
    {
        if (string[i] < 91 && string[i] > 64)
        {
            printf("%c", string[i]);
        }
    }
    printf("\n");
    return 0;
}
