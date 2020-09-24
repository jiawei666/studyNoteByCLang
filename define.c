#include <stdio.h>


#define A(x) x;x;x;x;x;x;x;x;x;x;

void main() {
    int n = 0;
    A(A(printf("%d\n", n++)))
}
