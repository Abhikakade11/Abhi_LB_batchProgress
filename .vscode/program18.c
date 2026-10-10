#include<stdio.h>
#include<stdlib.h>

void CheackEven( int ino)
{
    if((ino % 2) == 0)
    {
        printf("It is Even Number \n");
    }
    else 
    {
        printf("It is Odd Number \n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheackEven(iValue);
    
    return EXIT_SUCCESS;
}