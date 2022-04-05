


 void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int Deletion(int arr[],int size,int index)
{


    for(int i=index ;i<size-1;i++)
    {

        arr[i]=arr[i+1];

    }

}

int main()
{
    int arr[100]={1,2,3,4,5};
    int size=5 ,index=2;
    printf("Before Deletion :\n");
    display(arr,size);

    Deletion(arr,size,index);
    size =size-1;
    printf("After Deletion :\n");
    display(arr,size);




}

