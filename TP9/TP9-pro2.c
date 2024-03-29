#include <stdio.h>

int main() {
    int m1[2][2], m2[2][2], m3[2][2];
    int i, j;
    printf("Enter elements for matrix m1 :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements for matrix m2 :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("\nMatrix m3 :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    int max = m3[0][0], min = m3[0][0];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (m3[i][j] > max) {
                max = m3[i][j];
            }
            if (m3[i][j] < min) {
                min = m3[i][j];
            }
        }
    }

    printf("\nMax number in m3: %d\n", max);
    printf("Min number in m3: %d\n", min);

    return 0;
}
