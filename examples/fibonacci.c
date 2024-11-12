#include "../suomic.h"
#include <stdio.h>

funktio printFib(luku n) {
    jos (n < 1) {
        printf("Invalid Number of terms\n");
        palauta;
    }

    luku prev1 = 1;
    luku prev2 = 0;

    silmukka (luku i = 1; i <= n; i++) {
        jos (i > 2) {
            const luku curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);
        }
        toisin jos (i == 1)
            printf("%d ", prev2);
        toisin jos (i == 2)
            printf("%d ", prev1);
    }
}

paaohjelma() {
    printFib(37);
    palauta 0;
}