#include <iostream>
using namespace std;
int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
void FibonacciSeries(int num){
    if(num<=0){
        cout << "Enter valid range!!!" << endl;
    }
    else{
        for(int i=0; i<num; i++){
            cout << Fibonacci(i) << " " ;
        }
    }
    cout << endl;
}


int main(){
    cout << "<------------Fibonacci Series With Recursion---------------->" << endl;
    int num;
    cout << "Enter the range for the fibonacci series : " ;
    cin >> num;
    FibonacciSeries(num);
}