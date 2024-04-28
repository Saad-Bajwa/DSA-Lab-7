#include<iostream>
using namespace std;
void FibonacciSequence(int num){
    int first=0;
    int second = 1;
    if(num<=0){
        cout << "Please enter a valid value !!!" << endl;
    }
    else if(num == 1){
        cout << "Fibonacci series upto " << num << " term is : 0" << endl;
    }
    else{
        cout << "Fibonacci series upto " << num << " term is : ";
        cout << first << " " << second ;
        for(int i=2; i<num;i++){
            int result = first + second;
            cout << " " << result ;
            first = second;
            second = result;
        }
    }
}
int main(){
    cout << "<------------Fibonacci Series Without Recursion---------------->" << endl;
    int n;
    cout << "Enter a term for fibonacci series : " ;
    cin >> n;
    FibonacciSequence(n); 
}