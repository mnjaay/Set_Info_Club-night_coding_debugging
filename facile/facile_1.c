#include <stdio.h>

int main() {
    int tab[5] = {3, 6, 9, 12, 15};

    for (int i = 0; i < 5; i++) { // ajout de 5 au lieu de 4
        printf("%d ", tab[i]);
    }

    return 0;
}
