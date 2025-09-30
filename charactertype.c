#include <stdio.h>
#include <ctype.h>
int main() {
  char Alphabet;
    scanf("%c",&Alphabet);
    if (isalpha(Alphabet))
        printf("Alphabet");
    else if(isdigit(Alphabet))
    printf("Digit");
    else
        printf("Symbol");
    return 0;
}
