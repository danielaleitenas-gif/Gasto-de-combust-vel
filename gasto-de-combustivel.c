#include <stdio.h>

int main() {
    const double CONSUMO_KM_L = 12.0;

    int tempo_gasto, velocidade_media;
    double litros_necessarios;

    scanf("%d %d", &tempo_gasto, &velocidade_media);

    litros_necessarios = (tempo_gasto * velocidade_media) / CONSUMO_KM_L;

    printf("%.3lf\n", litros_necessarios);

    return 0;
}
