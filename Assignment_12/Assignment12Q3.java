////////////////////////////////////////////////////////////////////////////////
//
//  Description : Accept a number and display the pattern 
//
////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int iCnt1 = 0, iCnt2 = 0;

        for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
        {
            for(iCnt2 = iCol; iCnt2 >= 1; iCnt2--)
            {
                System.out.print(iCnt2+"\t");
            }
            System.out.print("\n");
        }
    }
}

class Assignment12Q3
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter a number : ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter a number : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

    }
}                                                                                                                                         