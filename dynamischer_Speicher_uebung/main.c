#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool Myownfunction(char *ptr1, char *ptr2);

int main(void) {

    char buffer[100];
    gets(buffer);
    char *wort = malloc(strlen(buffer+1)*sizeof(char));
    int len = strlen(wort);
    strcpy(wort, buffer);
    printf("Das eingegebene Wort lautet: %s\n", wort);
    gets(buffer);
    int len2= strlen(buffer);
    char *alteaddresse = wort;
    wort = realloc(wort, (len + len2 + 2)*sizeof(char));
    strcat(wort, " ");
    strcat(wort, buffer);
    printf("Das eingegebene Wort lautet: %s\n", wort);
    printf("%p",wort);
    int x = Myownfunction(alteaddresse,wort);
    printf("\n%d",x);


    free(wort);

}
bool Myownfunction(char *ptr1, char *ptr2)
{
    if (ptr1 == ptr2)
    return 1;
    else
    return 0;
}
