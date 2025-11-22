#include <stdio.h>

float calculerPrix(float prixHT, float tva) {
     return prixHT * (1 + tva / 100); //ajout de return
}

int main() {
    float prix = calculerPrix(100, 18);
    printf("Prix TTC : %f\n", prix);//ajout de %f
    return 0;
}

