#include <stdio.h>
void reverseString();
int main() {
    printf("Enter a name: ");
    reverseString();
    return 0;
}

void reverseString() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseString();
        printf("%c", c);
    }
}
