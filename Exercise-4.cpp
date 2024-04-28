#include<iostream>
using namespace std;
int PowerUsingRecursion(int num,int power){
    if(power != 0){
        return num*PowerUsingRecursion(num,power-1);
    }
    else{
        return 1;
    }
}

int main(){
    int num, power;
    cout << "Enter the number : " ;
    cin >> num;
    cout << "Enter the power : ";
    cin >> power;
    cout << "The result is : " << PowerUsingRecursion(num, power);
}