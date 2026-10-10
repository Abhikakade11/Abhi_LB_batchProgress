



#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////
//
// function name    : Addition 
// input            : Integer , Integer
// output           : Integer
// Description      : Performs Addition
// Date             : 04/10/2026
// Author           : Abhijit Ganesh Kakade 
//
////////////////////////////////////////////////////
int Addition(
                int ino1,           // first input
                int ino2            // second input
            )
    {
        int iAns = 0;

        iAns = ino1 + ino2;         // Bussiness logic

        return iAns;
    }

    ////////////////////////////////////////////////////
    //
    // Entry point of the Application
    //
    ////////////////////////////////////////////////////
int main ()

{
    int  iValue1 = 0, iValue2 = 0, iResult = 0;
    
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
////////////////////////////////////////
//
// step :5 test the program
// 
//  Tested test case
//------------------------------  
// Input1    intput2     output
//   10          11          21
//   11          0           11
//   20          -9          11
//   -9          20           11
//   -21         -11         -31
//-------------------------------
///////////////////////////////////////