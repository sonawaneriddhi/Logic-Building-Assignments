import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A , int B )
    {
        Arr = new int [A][B];
    }   

    public void Accept()
    {
        System.out.println("Enter Number of Elements : ");
        Scanner sobj = new Scanner(System.in);

        int i , j = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Number of Elements are : ");
        Scanner sobj = new Scanner(System.in);

        int i , j = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Diagonal()
    {
        int iSum = 0 ;

        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j = 0 ; j < Arr[i].length;j++)
            {
                if(i == j )
                {
                    iSum = iSum +  Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public double NormalMatrix()
    {
        int iSum = 0 ;
        for(int i = 0 ; i < Arr.length; i++)
        {
            for(int j = 0 ; j < Arr[i].length;j++)
            {
                iSum = iSum +  Arr[i][j];
            }
        }
        return findsqrt(iSum);
    }

    public double findsqrt(double dNo)
    {
        double t = 0.0 ;
        double sqrt = dNo / 2;

        if(dNo == 0 )
        {
            return 0;
        }

        do 
        {
            t = sqrt;
            sqrt = (t + (dNo / t ))/ 2;
        } while((t - sqrt) != 0);

        return sqrt;
    }
};

class Assignment_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of iColumns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Summmation of Diagonal are : ");
        System.out.println("\t"+mobj.Diagonal());
       
        double normal = mobj.NormalMatrix();
        System.out.println("Normal of Matrix : " + normal);

    }
}
