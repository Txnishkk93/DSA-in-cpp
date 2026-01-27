#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    int c = a*b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"Enter the value of a : ";
    cin>>num1;
    cout<<"Enter the value of b : ";
    cin>>num2;
    cout<<"The value of a * b is "<<sum(num1,num2);
    return 0;
}