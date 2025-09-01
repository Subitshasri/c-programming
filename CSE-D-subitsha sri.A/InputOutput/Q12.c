#include <stdio.h>

int main() {
    int a;
    char ch;
    printf("Enter an ASCII value: ");
    scanf("%d", &a);
    ch = (char)a;
    printf("The character for ASCII value %d is '%c'\n", a, ch);

    return 0;
}
