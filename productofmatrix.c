#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &m);
   printf("Enter number of columns of first matrix: ");
    scanf("%d", &n);
     int a[m][n];
  printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &p);
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &q);
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    int b[p][q];
    int res[m][q];
    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            res[i][j] = 0;
              for (int k = 0; k < n; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}