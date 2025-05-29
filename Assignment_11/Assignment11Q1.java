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
        char cChar = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++,cChar++)
        {
            System.out.print(cChar+"\t");
        }
    }
}

class Assignment11Q1
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