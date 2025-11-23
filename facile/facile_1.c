#include <stdio.h>

int main() {
    int tab[5] = {3, 6, 9, 12, 15};
// error trouve etait que la condition de sortie etait 4 au lieu de 5
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
