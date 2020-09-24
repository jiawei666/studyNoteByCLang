#include <stdio.h>

int main() {
    int a[10];
    int b;

    for (int i = 0; i < 10; ++i) {
        printf("请输入第%d个数\n", i+1);
        scanf("%d", &a[i]);
    }

    for (int p = 0; p < 10; ++p) {
        printf("%d,", a[p]);
    }

    printf("\n");

    for (int j = 0; j < 10; ++j) {
        for (int k = j + 1; k < 10; ++k) {
            if (a[j] < a[k]) {
                b = a[j];
                a[j] = a[k];
                a[k] = b;
            }
        }
    }

    for (int l = 0; l < 10; ++l) {
        printf("%d,", a[l]);
    }

}
