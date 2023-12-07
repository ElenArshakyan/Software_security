#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
   
    std::cout << "Enter the first number: ";
    int num1;
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    int num2;
    std::cin >> num2;

    int gcd_result = gcd(num1, num2);

    int lcm_result = lcm(num1, num2);
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd_result << std::endl;
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm_result << std::endl;

    return 0;
}
