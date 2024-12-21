#include <stdio.h>

void carregamento() {
    printf("\t ----------------------------- \n");
}

void menuInicial() {
    printf("\t 1 - QUILÔMETRO (Km);\n"
           "\t 2 - METRO (m);\n"
           "\t 3 - CENTIMETRO (cm);\n"
           "\t 4 - MILIMETRO (mm);\n"
           "\t 0 - SAIR.\n");
           carregamento();
           printf("Digite o valor correspondente a unidade inicial: ");
}

void menuMetro() {
    printf("\t 1 - CENTÍMETRO (cm);\n"
           "\t 2 - MILÍMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

int main() {
    int primeiraOpcao, segundaOpcao;
    float valor;

    printf("Olá! Bem vidno(a) ao nosso Sistema de conversão de Unidades de comprimento!\n");
    printf("\t Segue o nosso menu para auxiá-lo(a):\n");

    do {
        menuInicial();
        scanf("%d", &primeiraOpcao);
        carregamento();

        switch (primeiraOpcao) {
            case 1: {
                break;
            }

            case 2: {
                printf("Você escolheu a unidade de metro (m).\n");
                printf("Você deseja converter de metro para: \n");
                menuMetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao) {
                    case 1: {
                    }

                    case 2: {
                        printf("Você escolheu a unidade de milímetro (mm).\n");
                        printf("Digite o valor em metros (m) para convertê-lo em milímetros (mm): ");
                        scanf("%f", &valor);
                        printf("%.2f metros (m) equivalem a %.2f milímetros (mm).\n", valor, valor * 1000);

                        break;
                    }

                    default: {
                        break;
                    }
                }
                break;
            }

            case 3: {
                break;
            }

            case 4: {
                break;
            }
            
            default: {
                if (primeiraOpcao != 0) {
                    printf("Opção inválida. Por favor, digite novamente.\n");
                }
                break;
            }
        }

        carregamento();
    } while (primeiraOpcao != 0);

    printf("Obrigado por usar o nosso sistema! Volte sempre!");

    return 0;
}