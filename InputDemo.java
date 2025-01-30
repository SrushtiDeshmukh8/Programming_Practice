import java.util.*;

class InputDemo
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);  

        int No1 = 0 , No2 = 0 , Ans = 0;

        System.out.println("Enter First No: ");
        No1 = sobj.nextInt();

        System.out.println("Enter Second No: ");
        No2 = sobj.nextInt();

        Ans = No1 + No2;

        System.out.println("Addition is: "+Ans);





    
    }
}