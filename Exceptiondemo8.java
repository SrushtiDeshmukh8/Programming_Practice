import java.io.BufferedReader;
import java.io.*;

class Exceptiondemo8
{
    public static void main (String A[])throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name: ");
        String name = bobj.readLine();

        System.out.println("Enter your Age : ");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your Name: "+name);
        System.out.println("Your Age: "+Age);
        
    }
}