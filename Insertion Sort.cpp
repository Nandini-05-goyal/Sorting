#include<bits/stdc++.h>
using namespace std;
void insertsort(int[],int);
int main()
{
    int arr[]={3,5,2,8,6,1,7,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertsort(arr,n);
     cout<< "Sorted Array:\n";
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
        return 0;
}
void insertsort(int arr[],int n)
{
    int i,j,t=0;
    for(i=0;i<n;i++)
    { t=arr[i];
      j=i-1;
     while(j>=0 && t<arr[j])
     {
         arr[j+1]=arr[j];
         j--;
     }
     arr[j+1]=t;
}
}



