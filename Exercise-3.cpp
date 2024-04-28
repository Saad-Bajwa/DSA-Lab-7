#include<iostream>
using namespace std;
int RaiseToPower(int num,int power){
    int result = 1;
    for(int i=1; i<=power; ++i){
        result *= num;
    }
    return result;
}

int main(){
    cout << "<------------Power Calculation Without Recursion---------------->" << endl;
    int num, power;
    cout << "Enter the number : " ;
    cin >> num;
    cout << "Enter the power : ";
    cin >> power;
    cout << "The result is : " << RaiseToPower(num, power);
}