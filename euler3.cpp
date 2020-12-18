// Largest prime factor
// Show HTML problem content 
// Problem 3
// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>
#include <iostream>
#define NUM 600851475143
using namespace std;

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
    // printf(max_prime);
	cout << max_prime << endl;
    return 0;
}
