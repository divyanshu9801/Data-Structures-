#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n,i;
    int max,min;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=sizeof(a)/sizeof(a[0]);
    max=(k-1);
    min=0;
    cout<<"Enter the number you want to search"<<endl;
    int num;
    cin>>num;
    int mid;
    while(max>=min)
    {
        mid=(max+min)/2;
        if(num==a[mid])
        {
            return mid;

        }
        else if(num<a[mid])
            max=(mid-1);
        else if(num>a[mid])
            min=(mid+1);
    }
    cout<<mid;
return 0;
}
