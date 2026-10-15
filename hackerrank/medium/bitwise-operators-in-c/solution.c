#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int andResult = i & j;
            int orResult = i | j;
            int xorResult = i ^ j;

            if (andResult > maxAnd && andResult < k)
                maxAnd = andResult;

            if (orResult > maxOr && orResult < k)
                maxOr = orResult;

            if (xorResult > maxXor && xorResult < k)
                maxXor = xorResult;
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main(void) {
    int n, k;

    if (scanf("%d %d", &n, &k) != 2)
        return 1;

    calculate_the_maximum(n, k);
    return 0;
}
