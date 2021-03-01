#include<iostream>
using namespace std;
void swap(int *a, int *b);
void display(int arr[],int n);
int main()
{
    int arr[]={3,5,2,8,6};
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
display(arr,n);
}
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
