#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    while (b <= num || num == 0) {
        if (num == 0 || num == 1) {
        printf("\nO numero %d pertence a sequencia de fibonacci", num);
        break;
    }
        c = a + b;
        a = b;
        b = c;
        if (b == num) {
            printf("\nO numero %d pertence a sequencia de fibonacci", num);
            break;
        }
    }
    
    if(b != num && num != 0){
        printf("\nO numero %d NÃO pertence a sequencia de fibonacci", num);
    }
    return 0;
}