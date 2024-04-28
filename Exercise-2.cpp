#include<iostream>
using namespace std;
int FactorialRecursion(int n){
    if(n>1){
        return n * FactorialRecursion(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    cout << "<------------Factorial With Recursion---------------->" << endl;
    int num;
    cout << "Enter the number for factorial : " ;
    cin >> num;
    cout << "The factorial of the number is : " << FactorialRecursion(num);
}