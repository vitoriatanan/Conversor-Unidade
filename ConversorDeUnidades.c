#include <stdio.h>

void carregamento() {
    printf("\t ----------------------------- \n");
}

void menuInicial() {
    printf("\t 1 - QUIL\u00d4METRO (Km);\n"
           "\t 2 - METRO (m);\n"
           "\t 3 - CENTIMETRO (cm);\n"
           "\t 4 - MILIMETRO (mm);\n"
           "\t 0 - SAIR.\n");
           carregamento();
           printf("Digite o valor correspondente a unidade inicial: ");
}

void menuMetro() {
    printf("\t 1 - CENT\u00cdMETRO (cm);\n"
           "\t 2 - MIL\u00cdMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

int main() {
    int primeiraOpcao, segundaOpcao;
    float valor;

    printf("Ol\u00e1! Bem-vindo(a) ao nosso Sistema de convers\u00e3o de Unidades de comprimento!\n");
    printf("\t Segue o nosso menu para auxili\u00e1-lo(a):\n");

    do {
        menuInicial();
        scanf("%d", &primeiraOpcao);
        carregamento();

        switch (primeiraOpcao) {
            case 1: {
                break;
            }

            case 2: {
                printf("Voc\u00ea escolheu a unidade de metro (m).\n");
                printf("Voc\u00ea deseja converter de metro para: \n");
                menuMetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao) {
                    case 0: {
                        printf("Voltando ao menu inicial.\n");
                        break;
                    }

                    case 1: {
                        printf("Voc\u00ea escolheu a unidade de cent\u00edmetro (cm).\n");
                        printf("Digite o valor em metros (m) para convert\u00ea-lo em cent\u00edmetros (cm): ");
                        scanf("%f", &valor);
                        printf("%.2f metros (m) equivalem a %.2f cent\u00edmetros (cm).\n", valor, valor * 100);
                        break;
                    }

                    case 2: {
                        printf("Voc\u00ea escolheu a unidade de mil\u00edmetro (mm).\n");
                        printf("Digite o valor em metros (m) para convert\u00ea-lo em mil\u00edmetros (mm): ");
                        scanf("%f", &valor);
                        printf("%.2f metros (m) equivalem a %.2f mil\u00edmetros (mm).\n", valor, valor * 1000);

                        break;
                    }

                    default: {
                        if (segundaOpcao != 0) {
                            printf("Op\u00e7\u00e3o inv\u00e1lida!\n");
                            break;
                        }
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
                    printf("Op\u00e7\u00e3o inv\u00e1lida. Por favor, digite novamente.\n");
                }
                break;
            }
        }

        carregamento();
    } while (primeiraOpcao != 0);

    printf("Obrigado por usar o nosso sistema! Volte sempre!");

    return 0;
}
