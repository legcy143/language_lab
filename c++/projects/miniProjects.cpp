#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string ans =  {isPrime(num) ? "number is prime number\n" : "number is not prime number\n"};
    std::cout<<ans;

    return 0;
}
