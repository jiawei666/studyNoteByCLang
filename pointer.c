#include <stdio.h>
void reserve(int *p, int n)
{
   int *i, *j, tem;

   i = p;
   j = p+n-1;

    for (; i < p+(n-1)/2; ++i,--j) {
        tem = *i;
        *i=*j;
        *j = tem;
    }
}



void max_min(int *p, int n){
    int *i, *j, tem;
    i = p;
    for (; i < p+n; ++i) {
        for (j = i+1; j < p+n; ++j) {
            if (*i > *j) {
                tem = *i;
                *i=*j;
                *j=tem;
            }
        }
    }
}


void copy_string(char *a, char *b){
    printf("asdadasd");
    printf("%s",*a);
    while (*a != '\0') {
        printf("z");
        *b=*a;
        a++;
        b++;
    }
}


int max(int a, int b){
    if (a >= b) {
        return a;
    }
    return b;
}

int min(int a, int b){
    if (a <= b) {
        return a;
    }
    return b;
}

int sum(int a, int b){
    return a + b;
}

int process(int a, int b, int (*fun)()) {
    int res;
    res = (*fun)(a, b);
    return res;
}

int main(int argc, char *argv[]) {

//    char *str = "yuanjiawei";
//
//    str[0] = "a";
//
//    printf("%c", str[0]);


    // 数组指针想加减
//    int a[3] = {1, 2, 3};
//
//    int *p=&a[1], *q=&a[2];
//
//     printf("%d", q-p);

    // 指针指向变量
//    char i[10] = "yuanjiawei";
//    char *i_pointer;
//    i_pointer = i[9];
//    char c = i_pointer;
//    printf("%c", c);

// 指针指向数组
//    int a[3] = {3, 1, 2};
//    int *p;
//    p = a;
//
//    for (int i = 0; i < 4; ++i, ++p) {
//        printf("%d\n", *p);
//    }

//    int *p, a[3];
//    p = a;
//    for (int i = 0; i < 3; ++i) {
//        scanf("%d", p+i);
//    }
//    printf("%d,%d,%d", *p, *(p+1), *(p+2));
//
//    for (int j = 0; j < 3; ++j, ++p) {
//        printf("%d", *p);
//    }


//    int a[3] = {3,1,2};
//    for (int i = 0; i < 3; ++i) {
//        printf("%d,", a[i]);
//    }
//    reserve(a, 3);
//    printf("\n");
//    for (int i = 0; i < 3; ++i) {
//        printf("%d,", a[i]);
//    }

//    int a[10] = {123,43,765,123,1000000,5,345,47,657,6654};
//
//    max_min(a, 10);
//
//    printf("最大值：%d,最小值%d", a[9], a[0]);

// 指针指向多维数组
//    int a[2][2][2] = {1,2,3,4,5,6,7,8};
//
//    int (*p)[2][2];
//    p = a;
//
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            for (int k = 0; k < 2; ++k) {
//                printf("%d,", *(*(*(p+i)+j)+k) );
//            }
//        }
//    }

// 指针指向字符串

//    char *a[2] = {"jiawei", "yuan"};
//    char *b = "jiawei_b";
//    printf("%s", a[1]);

//    char **p = a;

//    printf("%s", *p);

//    void copy_string(char *a, char *b);
//    char *a = "my name is yuanjiawei";
//    char b[] = "nn,mnm,";
//
//
//    printf("1111\n");
//    printf("a=\"%s\",b=\"%s\"\n", a, b);
//
//    copy_string(a, b);
//
//
//    printf("a=\"%s\",b=\"%s\"", a, b);


//    int a=1, b=2, r1, r2, r3;
//    int (*p_max)() = max;
//    int (*p_min)() = min;
//    int (*p_sum)() = sum;
//    r1 = process(a, b, max);
//    r2 = process(a, b, min);
//    r3 = process(a, b, sum);
//
//    printf("最大值：%d,最小值：%d,和：%d", r1, r2, r3);


}
