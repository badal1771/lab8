#include <iostream>
using namespace std;
int main()
{
    int array[9999],i,n,sum=0;
    cout<<"enter number of data in array"<<endl;
    cin>>n;
    cout<<"enter the number of data"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for (i=0;i<n;i++)
    {
        sum +=array[i];

    }
    cout<<"sum of data in array is "<<sum<<endl;
    return 0;
}
