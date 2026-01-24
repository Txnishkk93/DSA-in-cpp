#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int age;
    cin >>age;
    if(age<18){
        cout<<"You're not eligible for job";
    }else if(age>=18){
         cout<<"You're eligible for job";
    }else if(age>=55){
        cout<<"you're eligible for job but retirement soon";
    }else{
        cout<<"retirement time";
    }
    return 0;
} 