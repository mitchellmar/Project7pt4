#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include <list>
#include "Utility.h"
#include "Car.h"

bool anyPrime(const std::vector<int>& values);

int main() {
    auto integers = randomIntegers();
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";
}

bool anyPrime(const std::vector<int>& values) {
    // TODO: return true if any of the values are prime numbers
    bool result = false;

    for (auto itr : values) {

        if (itr == 1) {
            continue;
        }

        bool isPrime = true;   

        for (int i = 2; i <= sqrt(itr); i++) { 

            if (itr % i == 0) {

                isPrime = false;
                break; 
            }
        }

        result = isPrime;

        if (isPrime) {
            break;
        }
    }
    return result;
}
