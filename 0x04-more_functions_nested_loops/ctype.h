#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch = '5';
    if (_isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}

