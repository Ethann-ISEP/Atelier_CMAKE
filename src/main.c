#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    
    // CAS 1 : Opérations à deux nombres (add, sub, mul, div)
    // Exemple : ./calculator add 2 3 (Cela fait 4 "mots")
    if (argc == 4) {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%lf", r);
        }
        else {
            printf("Erreur de parametres");
        }
    }
    
    // CAS 2 : Opération à un seul nombre (Le Carré)
    // Exemple : ./calculator car 5 (Cela fait 3 "mots")
    // --- C'EST LA PARTIE QUE NOUS AJOUTONS ---
    else if (argc == 3) {
        char* op = argv[1];
        char* a = argv[2];

        if (strcmp(op, "car") == 0) {
            // On convertit en int (atoi) car la consigne demandait des entiers pour le carré
            int res = square(atoi(a)); 
            printf("%d", res);
        }
        else {
            printf("Erreur de parametres");
        }
    }
    // ------------------------------------------

    // CAS 3 : Pas le bon nombre d'arguments
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
