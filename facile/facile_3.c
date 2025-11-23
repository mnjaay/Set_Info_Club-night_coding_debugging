#include <stdio.h>

int sommePairs(int tab[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] % 2 == 0)
            somme += tab[i];  
    }
    return somme;
}

int main() {
    int tab[5] = {2, 3, 4, 5, 6};
    int total = sommePairs(tab, 5);

    printf("Somme des nombres pairs : %d\n", total);

    return 0;
}