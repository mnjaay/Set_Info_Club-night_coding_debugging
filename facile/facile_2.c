#include <stdio.h>

float calculerPrix(float prixHT, float tva) {
     return prixHT * (1 + tva / 100); 
}

int main() {
    float prix = calculerPrix(100, 18);
    printf("Prix TTC : %f\n", prix);
    return 0;
}

