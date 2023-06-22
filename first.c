#include <stdio.h>


int biggest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int result = biggest(num1, num2);
    printf("The biggest number is: %d\n", result);
    
    return 0;
}