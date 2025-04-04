#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter expression (e.g., 5 + 2): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if (b != 0) printf("Result: %d\n", a / b);
            else printf("Error: Divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
