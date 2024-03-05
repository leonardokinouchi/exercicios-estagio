#include <stdio.h>
#include <string.h>

int main() {
    char frase[99];
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    int tamanho = strlen(frase);
    int i, j;
    char temp;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = frase[i];
        frase[i] = frase[j];
        frase[j] = temp;
    }

    printf("Frase invertida: %s\n", frase);

    return 0;
}