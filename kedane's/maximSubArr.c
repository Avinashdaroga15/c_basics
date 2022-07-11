#include<stdio.h>

void maxiSubArr(int arr[],int size){
    int currSum=0;
    int maxSum=0;
    int start=0,end;

    for (int i = 0; i < size; i++)
    {
        currSum+=arr[i];

        if (currSum>maxSum)
        {
            maxSum = currSum;
            end =i;
        }
        
        if (currSum<0)
        {
            currSum=0;
            start = i+1;
        }
    }
    printf("Maximum sum is %d and the sub Array from %d to %d is as follow: \n",maxSum,start,end);
    
    for (int i = start; i <=end; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int num;

    printf("Enter number of element: ");
    scanf("%d",&num);

    int arr[num];

    printf("Enter elements: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    maxiSubArr(arr,num);

    return 0;    
}