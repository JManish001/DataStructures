#include<stdio.h>
int LinearSearch(int arr[],int size,int element)
{
for(int i=0;i<size;i++)
{
 if(arr[i] == element)
  {
     return i;
   }

}
 return -1;
}
int main()
{

    int arr[]={3,7,1,9,12,60,30,90};
    int size= sizeof(arr)/sizeof(int);
    int element =9;
    int SearchIndex = LinearSearch(arr,size,element);

    printf("element %d was found at index %d\n",element,SearchIndex);


}
