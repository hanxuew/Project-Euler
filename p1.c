#include <stdio.h>
#define NUM 600851475143

int main() {
    long num = NUM;
    long max_prime;
    for (long i = 2; i *i <= NUM; ++i) {
        while(num % i == 0) {
             num /= i;
             max_prime = i;
        }
    }
    if (num != 1) max_prime = num;
    printf(max_prime);
    return 0;
}
