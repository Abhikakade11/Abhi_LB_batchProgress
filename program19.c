#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChekEven(int ino)
{
    if((ino % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :\n");

    scanf("%d",&iValue);

   bRet = ChekEven(iValue);

   if(bRet == true)
   {
    printf("It is Even :");
   }
   
   else
   {
    printf("It is Odd");
   }
    return EXIT_SUCCESS;
}