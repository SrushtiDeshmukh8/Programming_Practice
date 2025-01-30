import java.util.Scanner;

class Exceptiondemo1
{
    public static void main(String A[])
    {
        int No1=0, No2=0, Ans = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        No2 = sobj.nextInt();

        try
        {
            System.out.println("Inside try Block");
            Ans = No1 / No2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside Catch block");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside Finally block");
        }
       

        System.out.println("Division is : "+Ans);
    }
}