#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* inverse_chaine(char* s) {
    if (s == NULL) {
        return NULL;
    }

    int n = strlen(s);
    int i = 0;
    int j = n - 1; 
    while (i < j) {
        char temp = s[i];
        s[i] = s[j]; 
        s[j] = temp;

        i++;
        j--; 
    }

    return s;
}

int main() {
    char chaine1[] = "bonjour";
    
    printf("Original: %s \n", chaine1 );
    printf(" Inversé: %s\n",inverse_chaine(chaine1));

   
    char chaine2[] = "";
    printf("Original: %s, Inversé: %s\n", chaine2, inverse_chaine(chaine2));

    
    char chaine3[] = "a";
    printf("Original: %s, Inversé: %s\n", chaine3, inverse_chaine(chaine3));

    
    char chaine4[] = "competition_night_code";
    printf("Original: %s, Inversé: %s\n", chaine4, inverse_chaine(chaine4));

    return 0;
}
