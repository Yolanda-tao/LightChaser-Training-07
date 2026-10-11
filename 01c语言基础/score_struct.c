#include <stdio.h>
struct student{
    char name[50];
    int score;
};
int main(){
    struct student stu;
    printf("write down your name:");
    scanf("%s", stu.name);
    printf("write down the score:");
    scanf("%d", &stu.score);
    printf("report card\n");
    printf("name:%s, score:%d",stu.name, stu.score);
    return 0;
}
