#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

#define LEN sizeof(struct student)



struct student {
    int num;
    float score;
    struct student *next;
};

void print_1() {
    printf("1312312");
}

typedef int inter ;

typedef void (*fun)();

void main() {
//    string s1 = "1232132";
//    printf("%s\n", s1);


// 
//    fun p;
//    p = print_1;
//    p();






    // 制作动态链表
    int num, i=1;
    float score;
    struct student students, *p1, *p2;
//    p1 = p2 = (struct student *)malloc(LEN);

    do {
        printf("请输入学号：");
        scanf("%d", &num);
        printf("请输入成绩：");
        scanf("%f", &score);

        if (i != 1) {
            p1 = (struct student *)malloc(LEN);
            p1->num = num;
            p1->score = score;
            p2->next = p1;
            p2 = p1;
        } else {
            students.num = num;
            students.score = score;
            p2 = p1 = &students;
        }

        p1->next = NULL;

        i++;
    } while (num != 0);


    while (students.next != NULL) {
        printf("学号：%d，分数：%2.2f\n", students.num, students.score);
        students = *students.next;
    }

}
