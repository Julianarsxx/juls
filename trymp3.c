#include <stdio.h>

int main() {
    int r, n, m, rn[5], un[10] = {0};
    char d;

    srand(time(NULL));

    while (1) {
        for (r = 0; r < 5; r++) {
            do {
                rn[r] = rand() % 10 + 1;
                m = 0;
                for (n = 0; n < r; n++) {
                    if (rn[r] == rn[n]) {
                        m = 1;
                        break;
                    }
                }

            } while (m || un[rn[r] - 1]);


            un[rn[r] - 1] = 1;
        }

        printf("\n\nRandom Numbers:\n");
        for (r = 0; r < 5; r++) {
            printf("%d ", rn[r]);
        }
        printf("\n\n");

        printf("Histogram \nRandom No.\n\n");

        for (r = 0; r < 5; r++) {
            printf(" %d: ", rn[r]);
            for (n = 0; n < rn[r]; n++) {
                printf("*");
            }
            printf("\n");
        }

        printf("\n\nTry again (y/n): ");
        
        d=getche();

        if (d != 'y' && d != 'Y')
            break;

        for (r = 0; r < 10; r++) {
            un[r] = 0;
        }

    }

    return 0;
}

