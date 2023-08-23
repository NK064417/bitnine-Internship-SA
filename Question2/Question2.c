#include <stdio.h>

int recursiveFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return recursiveFibonacci(n - 3) + recursiveFibonacci(n - 2);
}
int main() {
    int n = 10;
    int result = recursiveFibonacci(n);
    printf("F(%d) = %d\n", n, result);

	printf("Press any key to continue...");
    getchar(); // Wait for a key press

    return 0;
}