#include<stdio.h>

int main(){
    FILE *fptr;
    char string[100];
    int i=0;

    fptr = fopen("string.txt","r");
    string[i]=fgetc(fptr);
    while (string[i]!= EOF)
    {
        i++;
        string[i]=fgetc(fptr);
        
    }
    i=0;
    while (string[i]!= '.')
    {
        printf("%c",string[i]);
        i++;
    }
    printf("\n");
    fclose(fptr);
    return 0;
}