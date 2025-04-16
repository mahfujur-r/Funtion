#include <stdio.h>

void print1toN(int cur, int n) {
    if (cur > n) {
        return;
    }
    printf("%d ", cur);
    print1toN(cur + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print1toN(1, n);
    return 0;
}

