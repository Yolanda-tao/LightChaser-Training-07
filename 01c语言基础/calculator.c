#include <stdio.h>
int main() {
    double a, b; 
    char op;
    printf("enter numbers");
    if (scanf("%lf %c %lf", &a, &op, &b)!=3) {
        printf("format false \n");
        return 0;                //先把数字符号弄出来
    }
    switch(op) {
        case '+':
        printf("result:%.2lf + %.2lf = %.2lf\n", a, b, a + b);
        break;
        case '-':
        printf("result:%.2lf - %.2lf = %.2lf\n", a, b, a - b);
        break;
        case '*':
        printf("result:%.2lf * %.2lf = %.2lf\n", a, b, a * b );
        break;
        case '/':
        if (b == 0) {
            printf("false");
            return 0;            //防止除数为0
        }
        printf("result:%.2lf / %.2lf = %.2lf\n",a, b, a / b);
        break;
        default:
        printf("op false");
        break;       //确保符号，不乱码
        }
        return 0;
}
