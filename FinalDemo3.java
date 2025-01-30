class Demo 
{
    public int no1;
    final public int no2;       //const int No2 = 21;

    public Demo(int A , int B)
    {
        no1 = A;
        no2 = B;
    }
}



class FinalDemo3
{
    public static void main (String Arg[])
    {
        Demo dobj = new Demo(11,21);

        System.out.println("Value of no1 is: "+dobj.no1);
        System.out.println("Value of no2 is: "+dobj.no2);

        dobj.no1++;
        //dobj.no2++;

    }
}