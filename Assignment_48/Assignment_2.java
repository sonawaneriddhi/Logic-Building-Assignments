import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        for(int i = str.length() ; i >=1  ; i--)
        {
            for(int j = 0 ; j < i ; j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}

class Assignment_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);

    }
}