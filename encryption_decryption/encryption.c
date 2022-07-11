#include<stdio.h>
#include<string.h>
void UpperCase(char arr[]){
    
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i]>96&&arr[i]<+122)
        {
             arr[i] = arr[i]-32;
        }
    }
    // printf("Upercase lattered string %s\n",arr);
    
}
void lowerCase(char arr[]){
    
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i]>=65&&arr[i]<=90)
        {
             arr[i] = arr[i]+32;
        }
    }
    // printf("lowercase lattered string %s\n",arr);
    
}
void encryptor(char arr[]){
    // UpperCase(arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        int ascii = arr[i];
        int encryptedChar =ascii+3;
        // arr[i]=encryptedChar;
        if (encryptedChar>=65 && encryptedChar<=90)
        {
            arr[i]=encryptedChar;
            // printf("%c",encryptedChar);
        }else if (encryptedChar>=91 && encryptedChar<=96)
        {
            encryptedChar = 64+encryptedChar%90;
            arr[i]=encryptedChar;
        }else if (encryptedChar>=97 && encryptedChar<=122)
        {
            arr[i]=encryptedChar;
        }else{
             encryptedChar = 96+encryptedChar%122;
            arr[i]=encryptedChar;
        }
        
        // printf("Ascii %d/n",arr[i]);
    }
    printf("%s\n",arr);
}

void decryptor(char arr[]){
    for (int i = 0; i < strlen(arr); i++)
    {
        int ascii = arr[i];
        int encryptedChar =ascii-3;
        // arr[i]=encryptedChar;
       if (encryptedChar>=65 && encryptedChar<=90)
        {
            arr[i]=encryptedChar;
            // printf("%c",encryptedChar);
        }else if (encryptedChar<=64)
        {
            encryptedChar = 24+encryptedChar;
            arr[i]=encryptedChar;
        }else if (encryptedChar>=97 && encryptedChar<=122)
        {
            arr[i]=encryptedChar;
        }else{
             encryptedChar = encryptedChar+24;
            arr[i]=encryptedChar;
        }
        
        // printf("Ascii %d/n",string[i]);
    }
    // lowerCase(arr);
    printf("%s\n",arr);
   
}
int main(){
    char string[20];
    printf("Enter a string:");
    scanf("%s",string);
    printf("Entered string is %s\n",string);
    printf("Encypted string is as: ");
    encryptor(string);
    printf("decrypted string is as: ");
    decryptor(string);

    return 0;
}