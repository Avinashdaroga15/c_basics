#include<stdio.h>

int main(){
    FILE *fptr;
    char string[100];
    int i=0;

    fptr = fopen("string.txt","r");
    //entering string into an 1-d array
    string[i]=fgetc(fptr);
    while (string[i]!= EOF)
    {
        i++;
        string[i]=fgetc(fptr);
        
    }
    //printing read string from file
    i=0;
    while (string[i]!= '.')
    {
        printf("%c",string[i]);
        i++;
    }
    //changing case of each words first character 
    i=0;
    string[i] = string[i]-32;
    while (string[i]!= '.')
    {
        i++;
        if (string[i]==' ')
        {
            string[i+1]= string[i+1]-32;
        }
        
    }
    //printing string after converting in Camal case
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