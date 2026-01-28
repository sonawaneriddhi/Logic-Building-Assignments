import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {       
        int iCnt = 1;

        for(int i = 1; i <= iRow ; i++)
        {   
            for(int j = 1 ; j <=iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1 , iValue2);

    }
}