#include<iostream>
using namespace std;

int main()
{
int i,size;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int arr[size];
cout<<"Enter the elements of array"<<endl;
for (i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"Elements of the array are"<<endl;
for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
cout<<"Enter the element you want to search"<<endl;
int element;
cin>>element;
int flag;
for(i=0;i<size;i++)
{
    if(arr[i]==element)
        {
            flag=1;
            cout<<"Element is found at "<<i+1<<" position";
            break;
        }

}
if (flag=0)
    cout<<"Element is not found";
}

