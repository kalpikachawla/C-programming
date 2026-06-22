#include <stdio.h>
int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        // Print spaces: decreases as row index increases
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars: increases with row index
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
