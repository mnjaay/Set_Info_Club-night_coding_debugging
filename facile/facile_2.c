#include <stdio.h>

float calculerPrix(float prixHT, float tva) {
    prixHT * (1 + tva / 100); 
}

int main() {
    float prix = calculerPrix(100, 18);
    printf("Prix TTC : %s\n", prix);  
    return 0;
}

