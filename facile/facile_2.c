#include <stdio.h>

float calculerPrix(float prixHT, float tva) {
     return prixHT * (1 + tva / 100); 
}

int main() {
    float prix = calculerPrix(100.0, 18.0);
    printf("Prix TTC :%f ", prix);  
    return 0;
}

