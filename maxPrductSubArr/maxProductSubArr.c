#include<stdio.h>

void maxiSubArr(int arr[],int size){
    int currSum=1;
    int maxSum=0;

    for (int i = 0; i < size; i++)
    {
        currSum*=arr[i];

        if (currSum>maxSum)
        {
            maxSum = currSum;
            
        }
        
        if (currSum<0)
        {
            currSum=1;
        }
        
    }
    printf("Maximum sum is %d\n",maxSum);
    return 0;
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