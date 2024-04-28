#include<iostream>
using namespace std;
int SumofDigits(int num){
    int result = 0;
    for(int i=1; i<=num; i++){
        result += i;
    }
    return result;
}
int main(){
    cout << "<------------Sum of Digits Without Recursion---------------->" << endl;
    int num;
    cout << "Enter a number to calculate sum up to it : " ;
    cin >> num;
    cout << "Sum of the numbers to " << num << " is : " << SumofDigits(num);
}