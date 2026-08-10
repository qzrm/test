#include <stdio.h>

int main(void) {
    int i, j;
    FILE *fp = fopen("t99_result.txt", "w");
    if (fp) {
        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= i; j++) {
                fprintf(fp, "%d*%d=%-2d ", j, i, i * j);
                printf("%d*%d=%-2d ", j, i, i * j);
            }
            fprintf(fp, "\n");
            printf("\n");
        }
        fclose(fp);
    }
    return 0;
}
