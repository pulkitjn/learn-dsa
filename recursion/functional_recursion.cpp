#include<iostream>


/*
It should return something
*/
int sumTillN(int n) {
    if (n == 0) {
        return 0;
    }
    return sumTillN(n-1) + n;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1); 
}

int main() {
    std::cout << "sumTillN: " << sumTillN(10) << "\n";
    std::cout << "factorial: " << factorial(5) << "\n";
}