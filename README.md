EXERCICIOS PARA VAGA DE ESTÁGIO

1) 91

2)código em .c

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

3) 
a)9
b)128
c)49
d)100
e)13
f)20?

4) É a charada clássica da lâmpada que fica quente mas como tenho 2 idas posso ligar uma e vou na sala ver qual acendeu, depois desligo ela e ligo outra e faço o mesmo processo. Assim descubro 2 e a que não liguei é do interruptor que não acionei.

5) programa em .c

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

 
