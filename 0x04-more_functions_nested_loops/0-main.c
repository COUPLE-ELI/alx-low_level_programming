#include <stdio.h>

int _isupper(int c);

int main(void)
{
    char testChar = 'A';

    if (_isupper(testChar))
    {
        printf("%c is uppercase.\n", testChar);
    }
    else
    {
        printf("%c is not uppercase.\n", testChar);
    }

    testChar = 'a';

    if (_isupper(testChar))
    {
        printf("%c is uppercase.\n", testChar);
    }
    else
    {
        printf("%c is not uppercase.\n", testChar);
    }

    return (0);
}
