////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept a number and display the pattern 
//
////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t*\t");
        }
    }
}

class Assignment11Q3
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter a number : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);

    }
}                                                                                                                                         