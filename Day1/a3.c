#include <stdio.h>
#include <math.h>
int isPrime(int num) 
{
    if (num <= 1) 
    return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int fibonacci(int n) 
{
    if (n == 1) return 1;
    int a = 1, b = 2, temp;
    for (int i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int findNthTerm(int n)
 {
    int primeCount = 0, fibCount = 1, primeNum = 2, fibNum = 1;
    
    if (n % 2 != 0) {  // Odd: Fibonacci
        while (fibCount < (n + 1) / 2) {
            fibNum = fibonacci(fibCount + 1);
            fibCount++;
        }
        return fibNum;
    } else {  // Even: Prime
        while (primeCount < n / 2) {
            if (isPrime(primeNum)) {
                primeCount++;
            }
            primeNum++;
        }
        return primeNum - 1;
    }
}

int main() {
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);
    printf("The %dth term is: %d\n", n, findNthTerm(n));
    return 0;
}
