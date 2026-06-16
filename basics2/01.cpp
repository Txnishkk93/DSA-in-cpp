#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    int y;
    cout << "Enter the value of y : ";
    cin >> y;

    int result = (x > y) ? x : y;
    cout << "The larger value is : " << result;
    return 0;
}