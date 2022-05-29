#include <stdio.h>
#include <string.h>

int main()
{
    char *array[] = {"Hello", "world"};
    for (int i = 0; i < sizeof array / sizeof(char *); ++i)
    {
        printf("%s\n", array[i]);
    }
    return 0;
}