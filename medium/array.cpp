#include <iostream>
#include <climits>
using namespace std;

void array()
{
    int size = 5;
    int marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
}

void smallest()
{
    int num[] = {32, -25, 45, 66, 78};
    int size = 5;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
}

void largest()
{
    int num[] = {52, -25, 45, 66, 78};
    int size = 5;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "Largest = " << largest;
}

void largestIndex()
{
    int num[5] = {52, -25, 45, 66, 48};
    int size = 5;
    int largest = INT_MIN;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }
    cout << "Largest num = " << largest << endl;
    cout << "Index of largest num = " << index << endl;
}

void linear(){
    int arr[]={4,5,6,7,8,3,9};
    int target=7;
    int size=7;
    int index=-1;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            target=arr[i];
            index=i;
            cout<<"Target is found "<<endl;
            cout<<"The index is "<<index;
        }
    }
    
}

 
int main()
{
    linear();
}