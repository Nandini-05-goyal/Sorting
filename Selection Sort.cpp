#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[],int n)
{
    int i,j, index;
    for(i=0; i<n-1; i++)
    {
        index=i;
        for(j=i+1;j<n; j++)
            if(arr[j]<arr[index])
                index=j;

            swap(&arr[index],&arr[i]);
    }
}


void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<< endl;
}
int main()
{
    int arr[]={3,5,2,8,6,1,7,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
   // int i,j,index;
    selectionSort(arr,n);
    cout<< "Sorted Array:\n";
    display(arr,n);
    return 0;
}

