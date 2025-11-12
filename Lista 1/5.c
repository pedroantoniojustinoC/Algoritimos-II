#include <stdio.h>
#include <math.h>

float volumeEsfera(float raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

int main() {
    float r;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    printf("Volume = %.2f\n", volumeEsfera(r));
    return 0;
}