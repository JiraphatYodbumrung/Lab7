#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random100to200();
int main() {
    int M, N;
    int A[20][20];
    int i, j, r, c;
    int rnum, numok;

    scanf("%d %d", &M, &N);

    if (M <= 2 || M >= 20 || N <= 2 || N >= 20)
        return 0;
    srand(time(NULL));
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            numok = 1;
            while (numok == 1) {
                rnum = random100to200();
                numok = 0;
                for (r = 0; r < M; r++) {
                    for (c = 0; c < N; c++) {
                        if (r < i || (r == i && c < j)) {
                            if (A[r][c] == rnum) {
                                numok = 1;
                                break;
                            }
                        }
                    }
                    if (numok == 1)
                        break;
                }
            }
            A[i][j] = rnum;
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int random100to200() {
    return (rand() % 101) + 100;
}
