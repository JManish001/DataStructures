#include<stdio.h>
int BinarySearch(int arr[],int size,int element)
{
     int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main()
{

    int arr[]={3,7,11,19,121,600,390,990};      //array must be sorted
    int size= sizeof(arr)/sizeof(int);
    int element =19;
    int SearchIndex = BinarySearch(arr,size,element);

    printf("element %d was found at %d\n",element,SearchIndex);


}
