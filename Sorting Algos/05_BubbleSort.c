
void printArray(int A[],int n)
{
    for(int i =0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
}

 void BubbleSort(int A[],int n)
 {
     for(int i=0;i<n-1;i++)         // for number of passes
     {
         for(int j=0;j<n-1-i;j++)   //  for comparisons in each pass
         {
             if(A[j]>A[j+1])
             {
                 int temp =A[j];
                 A[j] = A[j+1];
                 A[j+1] =temp;
             }

         }

     }

 }

int main()
{

    int A[]={2,4,1,5,7,8,3,9,6};
    int n= 9;

    printf("Before Sorting......\n");
    printArray(A,n);
    BubbleSort(A,n);
    printf("\nAfter Sorting........\n");
    printArray(A,n);
}
