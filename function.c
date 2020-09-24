#include <stdio.h>

float average(float a[10]){
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += a[i];
    }

    return sum/10.0;
}

int main() {
    float avg;
    float a[10] = {10,29,6,78,34,90.5,12,54,67,87};
    avg = average(a);

    printf("平均成绩：%2.2f", avg);
}
