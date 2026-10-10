
#include "Header.h"

    ////////////////////////////////////////////////////
    //
    // Entry point of the Application
    //
    ////////////////////////////////////////////////////
int main ()

{
    int  iValue1 = 0, iValue2 = 0, iResult =0;
    
    printf("Enter 1st Number :\n");
    if(scanf("%d",&iValue1) !=1 )
    {
        fprintf(stderr,"unable to procced as Input is invalid\n");
        return EXIT_FAILURE;
    }
    
    printf("Enter 2nd Number :\n");
    if(scanf("%d",&iValue2) !=1 )
    {
        fprintf(stderr,"unable to procced as Input is invalid\n");
        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);      

    printf("Addition  is : %d\n",iResult);

    return EXIT_SUCCESS;

}
