#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= std::sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;

    std::cout << "Enter a number to check if it is prime: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number!" << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
