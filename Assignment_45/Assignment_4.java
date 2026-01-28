import java.util.*;

class Matrix
{
    private int  Arr [] [];

    public Matrix(int A , int B )
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Enter Elements : ");
        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of Matrix are : ");

        int i = 0 , j = 0;

        for(i = 0  ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }

            System.out.println();
        }
    }

    public Boolean ChKIdentity()
    {
        int iRow = Arr.length;
        int iCol = Arr[0].length;

        if(iRow != iCol)
        {
            return false;
        }

        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(i == j )
                {
                    if(Arr[i][j] == 1)
                    {
                        return true;
                    }
                }
                else 
                {
                    if(Arr[i][j] == 0)
                    {
                        return false;
                    }
                }
            }
        
        }
        return true;
    }   
}

class Assignment_4
{
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Coloumns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        Boolean bRet = mobj.ChKIdentity();
        if(bRet)
        {
            System.out.println("Matrix is an Indentity Matrix");
        }
        else
        {
            System.out.println("Matrix is Not an Indentity Matrix");
        }
    }
}