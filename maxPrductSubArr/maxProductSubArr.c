#include<stdio.h>

void maxiSubArr(int arr[],int size){
    int currPro=1;
    int maxPro=0;

    for (int i = 0; i < size; i++)
    {
        currPro*=arr[i];

        if (currPro>maxPro)
        {
            maxPro = currPro;
            
        }
        
        if (currPro<0)
        {
            currPro=1;
        }
        
    }
    printf("Maximum sum is %d\n",maxPro);
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