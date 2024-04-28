#include<iostream>
using namespace std;

int SumofDigits(int num) {
    if (num == 0)
        return 0;
    return num + SumofDigits(num-1);
}

int main() {
    cout << "<------------Sum of Digits With Recursion---------------->" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = SumofDigits(number);
    cout << "Sum of digits of " << number << " is: " << sum << endl;
}
