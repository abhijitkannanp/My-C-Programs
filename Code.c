// 1 >
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1;
}

// 2 >
int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}



// 3>
#include <stdio.h>

int main() {
    int num, reversed = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    
    while (num != 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit;
        num /= 10;                      
    }

   
    printf("Reversed number: %d\n", reversed);

    return 0;
}

// 4>
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        
        if (num < 0)
            num = -num;

        while (num != 0) {
            num /= 10;  
            count++;    
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}