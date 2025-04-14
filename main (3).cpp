#include <stdio.h>
int main(int)
{
int n1[100], n2[100], n3[100], soma[100];
for (int i = 0; i < 100; i++) {
    do {
        printf("Digite a nota A1 do aluno %d: ", i+1);
        scanf("%d", &n1[i]);

        if (n1[i] < 0 || n1[i] > 5) {
            printf("Nota invalida! Digite um valor entre 0 e 5.\n");
        }

    } while (n1[i] < 0 || n1[i] > 5);
}
    printf("\n");
for (int i = 0; i < 100; i++) {
    do {
        printf("Digite a nota A2 do aluno %d: ", i+1);
        scanf("%d", &n2[i]);

        if (n2[i] < 0 || n2[i] > 5) {
            printf("Nota invalida! Digite um valor entre 0 e 5.\n");
        }

    } while (n2[i] < 0 || n2[i] > 5);

 printf("\n");
soma[i] = n1[i] + n2[i];
printf ("Nota: %d + %d = %d", n1[i] , n2[i], soma[i]);
}
printf("\n");
for (int i = 0; i < 100; i++) {
if (soma[i] < 6) {
        do {
           printf("Digite a nota AF do aluno %d: ", i+1);
        scanf("%d", &n3[i]);

        if (n3[i] < 0 || n3[i] > 5) {
            printf("Nota invalida! Digite um valor entre 0 e 5.\n");
        }
}
     while (n3[i] < 0 || n3[i] > 5);

        if (n1[i] < n2[i]) {
            n1[i] = n3[i];
        } else {
            n2[i] = n3[i];
        }
}
}
for (int i = 0; i < 100; i++) {
    
    soma[i] = n1[i] + n2[i]; 
    
    printf("Nota: %d\n", soma[i]);  
    
    switch (soma[i] >= 6) { 
        case 1:
            printf("Aluno %d - APROVADO\n", i+1);
            break;
        case 0:
            printf("Aluno %d - REPROVADO\n", i+1);
            break;
    }


}
return 0;}