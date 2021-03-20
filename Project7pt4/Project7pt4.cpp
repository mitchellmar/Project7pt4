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
    std::list<int> list= { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    std::vector<int> primes(list.begin(), list.end());
    std::vector<int> v(values.size() + primes.size());
    std::vector<int>::iterator it;
    it = std::set_intersection(primes.begin(), primes.end(), values.begin(), values.end(), v.begin());
    if (v.front() != 0) {
        result = true;
    }
    return result;
}