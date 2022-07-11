#include<stdio.h>
void mean(int data[],int num){
    float sum=0;
    float mean;
    for (int i = 0; i < num; i++)
    {
        sum+=data[i];
    }
    mean = sum/num;
    printf("Mean of %d data is %.2lf\n",num,mean);
}
void sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n-1-i; j++)
       {
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;  
        }
        
       }
       
    }
    
}
void median(int data[],int num){
    float medn;
    sort(data,num);
    // printf("sorted data:");
    if (num%2!=0)
    {
        medn = data[(num+1)/2];
    }else{
        medn=  (data[(num/2+1)] + data[(num/2)])/2;
    }
    printf("Median of %d data is %.2lf\n",num,medn);
}
void frequencyEach(int data[],int frqAr[],int n){
    int visited =-1;
    for (int i = 0; i < n; i++)
    {
        int count =1;
        for (int j = i+1; j < n; j++)
        {
            if (data[i]==data[j])
            {
                count++;
                frqAr[j]=visited;
            }
            
        }
        
        if (frqAr[i]!=visited)
        {
            frqAr[i]=count;
        }
        
        
    }
    
}
void mode(int data[], int n){
    int freArr[n];
    frequencyEach(data,freArr,n);
    //which element have highest index
    int max=0;
    int maxFrInd[2]={0,0};
    for (int j = 0; j < n; j++)
    {
        if (max< freArr[j])
        {
            max=freArr[j];
            maxFrInd[0]=max;
            maxFrInd[1]=j;
        } 
    }
     printf("Median of %d data is %d\n",n,data[maxFrInd[1]]);
}

int main(){
    int num;

    printf("Enter number of data:");
    scanf("%d",&num);

    int data[num];

    printf("Enter data:");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",data+i);
    }
    mean(data,num);
    median(data,num);
    mode(data,num);
    return 0;
}
// 14,15,16,15,17,15,18