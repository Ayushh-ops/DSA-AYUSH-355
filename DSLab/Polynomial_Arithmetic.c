#include <stdio.h>

int main() {
    int p[10], q[10], sum[10], diff[10], prod[20] = {0};
    int deg1, deg2, i, j;

    printf("Enter degree of first polynomial (p): ");
    scanf("%d", &deg1);
    printf("Enter coefficients of p (from x^0 to x^%d):\n", deg1);
    for (i = 0; i <= deg1; i++)
        scanf("%d", &p[i]);

    printf("Enter degree of second polynomial (q): ");
    scanf("%d", &deg2);
    printf("Enter coefficients of q (from x^0 to x^%d):\n", deg2);
    for (i = 0; i <= deg2; i++)
        scanf("%d", &q[i]);

    int maxDeg = (deg1 > deg2) ? deg1 : deg2;
    for (i = 0; i <= maxDeg; i++) {
        int coeffP = (i <= deg1) ? p[i] : 0;
        int coeffQ = (i <= deg2) ? q[i] : 0;
        sum[i] = coeffP + coeffQ;
        diff[i] = coeffP - coeffQ;
    }

    for (i = 0; i <= deg1; i++) {
        for (j = 0; j <= deg2; j++) {
            prod[i + j] += p[i] * q[j];
        }
    }

    printf("\nAddition (p + q): ");
    for (i = maxDeg; i >= 0; i--)
        printf("%dx^%d ", sum[i], i);

    printf("\nSubtraction (p - q): ");
    for (i = maxDeg; i >= 0; i--)
        printf("%dx^%d ", diff[i], i);

    printf("\nMultiplication (p * q): ");
    for (i = deg1 + deg2; i >= 0; i--)
        printf("%dx^%d ", prod[i], i);

    printf("\n");
    return 0;
}
