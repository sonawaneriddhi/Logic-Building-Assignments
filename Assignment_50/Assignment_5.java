import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0;
        
        for(i = 1; i <= iRow; i++)
        {          
            for(int j = 1 ; j <= iCol+1; j++)
            {
                if(i == j||j == 1 || i == 1||i == iCol || j > iCol)
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print("\t");
                }
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