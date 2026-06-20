#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int senha, tentativa, tentativas = 0;

    srand(time(NULL));
    senha = rand() % 100 + 1;

    printf("====================================\n");
    printf("   ESCAPE ROOM - SENHA SECRETA\n");
    printf("====================================\n");
    printf("Voce esta preso em uma sala!\n");
    printf("Descubra a senha entre 1 e 100 para escapar.\n\n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        tentativas++;

        if (tentativa > senha) {
            printf("Muito alto!\n\n");
        }
        else if (tentativa < senha) {
            printf("Muito baixo!\n\n");
        }
        else {
            printf("\nPARABENS!\n");
            printf("Voce descobriu a senha secreta!\n");
            printf("Tentativas realizadas: %d\n", tentativas);
            printf("A porta foi desbloqueada.\n");
        }

    } while (tentativa != senha);

    return 0;
}    


