#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    char palabras[10];

    for (x=0; x<10; x++) {
    printf("Introduzca la palabra #%d:", x);
    scanf("%s", palabras);
    int letras = strlen(palabras);
    printf("La palabra %s, tiene %i cantidad de letras\n", palabras, letras);
    }

}
