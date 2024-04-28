#include<iostream>
using namespace std;

int SumofDigits(int num) {
    if(num == 0) // Base case: If num is 0, return 0
        return 0;
    return (num % 10) + SumofDigits(num / 10); // Recursive call: Sum of last digit + sum of remaining digits
}

int main() {
    cout << "<------------Sum of Digits With Recursion---------------->" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = SumofDigits(number);
    cout << "Sum of digits of " << number << " is: " << sum << endl;
    return 0;
}
