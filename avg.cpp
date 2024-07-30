#include <iostream>

using namespace std;

int main()
{
    int arr[5];int sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number ";
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/5;
    cout<<"Average is "<<avg;
    return 0;
}
