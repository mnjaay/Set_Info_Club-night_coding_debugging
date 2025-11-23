#include <stdio.h>

float calculerPrix(float prixHT, float tva) {
    //error trouve return
     return prixHT * (1 + tva / 100); 
}

int main() { 
  //les valeurs entrees sont de type entier alors que la fonction attend des floats 
    float prix = calculerPrix(100.0, 18.0);
    // error troucve etait le format d'affichage  %f qui etait omis 
    printf("Prix TTC : %f", prix);  
    return 0;
}

