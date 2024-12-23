#include <stdio.h>

void ConversorKm_M(float *n){
    //convertendo de Km para m
    *n *= 1000;
}

int main(){

    float N;

    puts("Digite o numero em km que deseja converter para metros(m)");
    scanf("%f", &N);

    ConversorKm_M(&N);

	printf("Valor de convertido em m: %.2f\n", N);

    return 0;
}
