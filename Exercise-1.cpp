#include<iostream>
using namespace std;

int CalculateFactorial(int n){
    int fac = 1;
    for(int i=1; i<=n; ++i){
        fac*=i;
    }
    return fac;
}
int main(){
    cout << "<------------Factorial Without Recursion---------------->" << endl;
    int num;
    cout << "Enter the number for factorial : " ;
    cin >> num;
    cout << "The factorial of the number is : " << CalculateFactorial(num);
}