#include <stdio.h>

void carregamento() {
    printf("\t ----------------------------- \n");
}

void menuInicial() {
    printf("\t 1 - QUILOMETRO (Km);\n"
           "\t 2 - METRO (m);\n"
           "\t 3 - CENTIMETRO (cm);\n"
           "\t 4 - MILIMETRO (mm);\n"
           "\t 0 - SAIR.\n");
           carregamento();
           printf("Digite o valor correspondente a unidade inicial: ");
}


/**
 * Menu para auxiliar na conversão de metro
 * para centímetro ou milímetro 
 */
void menuMetro() {
    printf("\t 1 - CENTIMETRO (cm);\n"
           "\t 2 - MILIMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}


/**
 * Menu para auxiliar na conversão de centímetro
 * para metro ou milímetro 
 */
void menuCentimetro() {
    printf("\t 1 - METRO (m);\n"
           "\t 2 - MILIMETRO (mm);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}
//Menu para auxiliar na conversão de milímetro para outra unidade a escolha do usuario
void menuMilimetro() {
    printf("\t 1 - CENTIMETRO (cm);\n"
           "\t 2 - METRO (m);\n"
           "\t 3 - QUILOMETRO (km);\n"
           "\t 0 - VOLTAR AO MENU INICIAL.\n");
           carregamento();
}

int main() {
    int primeiraOpcao, segundaOpcao;
    float valor;

    printf("\nOla! Bem vindo(a) ao nosso Sistema de conversao de Unidades de Comprimento!\n");
    printf("\t Segue o nosso MENU para auxilia-lo(a):\n");

    do {
        menuInicial();
        scanf("%d", &primeiraOpcao);
        carregamento();

        switch (primeiraOpcao) {
            case 1: {
                break;
            }

            case 2: {
                printf("Voce escolheu a unidade de metro (m).\n");
                printf("Voce deseja converter de metro para: \n");
                menuMetro();
                printf("\nDigite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao) {
                    case 0: {
                        printf("Voltando ao menu inicial.\n");
                        break;
                    }

                    case 1: {
                        printf("Voce escolheu a unidade de centimetro (cm).\n");
                        printf("Digite o valor em metros (m) para converte-lo em centimetros (cm): ");
                        scanf("%f", &valor);
                        printf("%.2f metros (m) equivalem a %.2f centimetros (cm).\n", valor, valor * 100);
                        break;
                    }

                    case 2: {
                        printf("Voce escolheu a unidade de milimetro (mm).\n");
                        printf("Digite o valor em metros (m) para converte-lo em milimetros (mm): ");
                        scanf("%f", &valor);
                        printf("%.2f metros (m) equivalem a %.2f milimetros (mm).\n", valor, valor * 1000);

                        break;
                    }

                    default: {
                        if (segundaOpcao != 0) {
                            printf("Opçao invalida!\n");
                            break;
                        }
                    }
                }
                break;
            }

            /* Conversão de centímetro para metro ou milímetro */
            case 3: {
                printf("Voce escolheu a unidade de centimetro (cm).\n");
                printf("Voce deseja converter de centimetro para: \n");
                menuCentimetro();
                printf("Digite o valor correspondente a unidade que deseja converter: ");
                scanf("%d", &segundaOpcao);
                carregamento();

                switch (segundaOpcao)
                {
                case 0:
                    printf("Voltando ao menu inicial.\n");
                    break;

                    /* Case para conversão de centímetro para metro*/
                case 1: {
                    printf("Voce escolheu a unidade de metro (m).\n");
                    printf("Digite o valor em centimetros (cm) para converte-lo em metro (m): ");
                    scanf("%f", &valor);
                    printf("\n%.2f centimetro(s) (cm) equivalem a %.2f metro(s) (m).\n", valor, valor / 100);
                    break;
                }
                    
                
                default:
                    if (segundaOpcao != 0) {
                        printf("Opçao invalida!\n");
                        break;
                    }
                }
            }

            case 4: {
                break;
            }
            
            default: {
                if (primeiraOpcao != 0) {
                    printf("Opçao invalida. Por favor, digite novamente.\n");
                }
                break;
            }
        }

        carregamento();
    } while (primeiraOpcao != 0);

    printf("Obrigado por usar o nosso sistema! Volte sempre!");

    return 0;
}
