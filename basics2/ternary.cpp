#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age : ";
    cin >> age;

    (age >=18) ? cout << "Can vote" : cout << "Cannot vote ";
    return 0;
}  