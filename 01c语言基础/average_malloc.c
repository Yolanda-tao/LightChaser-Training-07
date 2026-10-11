#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    double sum=0.0;
    printf("how many numbers:");
    if (scanf("%d",&n) !=1) {
     return 1;}
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("storage not enough\n");
        return 1;                     //根据给的教程设置动态
    }    
    int a;
    for(int c=0; c<n; c++){
        printf("write down your number:");
        scanf(" %d", &a);
        arr[c] = a;
        sum = sum + a ;        //循环
    }
    printf("answer:%.2lf\n", sum/n);
    free(arr);
    arr = NULL;     //抄袭教程
    return 0;
}
