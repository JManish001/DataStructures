#include<stdio.h>

 void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4};
    display(arr,4);



}
