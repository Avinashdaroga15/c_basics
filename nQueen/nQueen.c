#include<stdio.h>

int isShafe(int n,int arr[][n],int x,int y){
    for (int row= 0;row < x; row++)
    {
        if (arr[row][y]==1)
        {
            return 0;
        }        
    }
    int row = x;
        int col = y;
        while (row>=0&&col>=0)
        {
            if (arr[row][col]==1)
            {
                return 0;
            }
            col--;
            row--;
        }

        row =x;
        col = y;
        while (row>=0&&col<n)
        {
            if (arr[row][col]==1)
            {
                return 0;
            }
            col++;
            row--;
        }
        return 1;
}

int nQueenPlacer(int n,int arr[][n],int x){
    if (x>=n)
    {
        return 1;
    }

    for (int col = 0; col < n; col++)
    {
        if(isShafe(n,arr,x,col)){
            arr[x][col]=1;

            if (nQueenPlacer(n,arr,x+1))
            {
                return 1;
            }
            arr[x][col]=0;
        }
    }
    return 0;
    
}

int main(){
    int queen;
    
    printf("Enter number of Queen to be placed:");
    scanf("%d",&queen);

    int board[queen][queen];

    for (int i = 0; i < queen; i++)
    {
        for (int j = 0; j < queen; j++)
        {
            board[i][j]=0;
        }
        
    }

    if (nQueenPlacer(queen,board,0))
    {
        for (int i = 0; i < queen; i++)
        {
            for (int j = 0; j < queen; j++)
            {
                printf("%d\t",board[i][j]);
            }
            printf("\n\n");
        }
    }
    
    
}