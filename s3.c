#include <stdio.h>
#include <string.h>
int main()
{
    char dest[] = "Hello ";
    char source[] = "World!";
    strcat(dest,source);
    printf("Concatenated String: %s\n", dest);
    
}
