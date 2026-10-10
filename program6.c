/*
step :1 Understand the problem statement
step :2 write the algoritham
step :3 decide the programming language
step :4 write the program
step :5 test the program

*/

//////////////////////////////////////////////////////
//
// step :1 Understand the problem statement
// user is going to enter any 2 integers
// and we have to perform addition
//
/////////////////////////////////////////////////////


/////////////////////////////////////////////////////
//
//step :2 write the algoritham
/*
   START
    accept first number as no1
    accept second number as no1
    creat the variable Ans as to store the result
    perform the addition and store into Ans
    display the result from Ans
    END
*/
/////////////////////////////////////////////////////


/////////////////////////////////////////////////////
//
//step :3 decide the programming language
//    we secelt C programming
/////////////////////////////////////////////////////

////////////////////////////////////////////////////
//
//step :4 write the program
//
////////////////////////////////////////////////////

#include<stdio.h>

    int Addition(int ino1, int ino2)    //colly
        {
            int iAns = 0;

            iAns = ino1 + ino2;            // Bussiness logic

            return iAns;
        }

int main ()

{
    int  iValue1 = 0, iValue2 = 0, iResult =0;
    
    printf("Enter 1st Number :\n");
    scanf("%d",&iValue1);
    
    printf("Enter 2nd Number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);   //caller     

    printf("Addition  is : %d\n",iResult);

    return 0;

}