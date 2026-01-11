#include <iostream>
#include <set>

int countDigit(int num) {
    int count = 0;
    while (num > 0){
        num /= 10;
        count++;
    }
    return count;
}

int countDigitAlter(int num) {
    /*
    100 -> 10^2 -> 2 + 1 = 3
    101 -> 10^2 + 1 -> 2 + 1 = 3 
    */

    // return ((int)(log10(num)) + 1) ;
    return 0;
}

int reverse(int num) {
    int rev = 0;
    while(num > 0){
        rev = rev*10 + num%10;
        num /= 10; 
    }
    return rev;
}

bool isPalindromeNumber(int num) {
    return (num == reverse(num));
}
/*
x^5 = x^2 * x^2 * x
val = power(x,5/2)
power(x, 5) = val * val * x;
*/
int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }

    int val = power(x, n/2);
    if (n%2 == 0) {
        return val*val;
    } else {
        return val*val*x;
    }
}

int sumOfPowerOfDigits(int num) {
    int p = countDigit(num);
    int sum = 0;
    while (num > 0) {
        int lastDig = (num%10);
        sum += power(lastDig, p);
        num /= 10;
    }
    return sum;
}

bool isArmstrong(int num) {
    return (sumOfPowerOfDigits(num) == num);
}

std::set<int> getDivisors(int num) {
    std::set<int> divisors;

    for (int i=1; i*i<num; i++) {
        if (num%i == 0) {
            divisors.insert(i);
            if (i*i != num) {
                divisors.insert(num/i);
            }
        }
    }
    return divisors;
}

// exactly two divisors, the number itself and 1
bool isPrime(int num) {
    int countDivisors = getDivisors(num).size();
    return (countDivisors == 2);
}

int gcd(int a, int b) {

    while (a > 0 && b > 0) {
        if (a>b) {
            a = a%b;
        } else {
            b = b%a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}


template<typename T>
void print(T container) {
    for (const auto& a: container) {
        std::cout << a << " ";
    }
    std::cout << "\n";
}


int main() {

    int dig_count = countDigit(12345);
    std::cout << "countDigit:" << dig_count << "\n";

    int reversed_number = reverse(12345);
    std::cout << "reverse:" << reversed_number << "\n";

    bool is_palidrome = isPalindromeNumber(10101);
    std::cout << "isPalindromeNumber:" << is_palidrome << "\n";

    bool armstrong = isArmstrong(153);
    std::cout << "isArmstrong:" << armstrong << "\n";

    print(getDivisors(20));

    bool is_prime = isPrime(11);
    std::cout << "isPrime:" << is_prime << "\n";
}