#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha;
    int minutos;

    printf("--- DESLIGAR COMPUTADOR --- \n\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Programar desligamento\n");
    printf("2 - Cancelar desligamento programado\n");
    printf("-------------------------------\n\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("\nQuantos minutos para desligar? ");
            scanf("%d", &minutos);
            // Converte minutos para segundos, pois o comando 'shutdown' usa segundos
            int segundos = minutos * 60;
            char comando_desligar[100];
            // Cria a string do comando
            sprintf(comando_desligar, "shutdown /s /t %d", segundos);
            // Executa o comando no sistema
            system(comando_desligar);
            printf("\nO computador vai desligar em %d minutos. Voce pode cancelar a qualquer momento na opcao 2.\n", minutos);
            break;

        case 2:
            // Comando para cancelar o desligamento
            system("shutdown /a");
            printf("\nDesligamento programado cancelado.\n");
            break;

        default:
            printf("\nOpcao invalida. Por favor, reinicie o programa.\n");
            break;
    }

    return 0;
}
