#include <stdio.h>
int main() {
    double a, b;
    char op;
    printf("enter number :");scanf("%1f%c%1f", &a, &op, &b);
    if (op == '+') {
        printf("result: %.21f\n", a+b);
    }
    else if (op == '-') {
        printf("result: %.21f\n", a-b);
    }
    else if (op == '*') {
        printf("result: %.21f\n", a*b);
    }
    else if (op == '/') {
        if (b == 0) {
            printf("result: fault!");
        } else {
            printf("result: %.21f\n", a/b);
        }
    }
    else {
        printf("fault");
    }
    return 0;
}