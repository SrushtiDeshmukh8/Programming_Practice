class ArrayDemo1
{
    public static void main (String Arg[])
    {
        int Arr [] = {10,20,30,40};      //static way

        //int Arr2[4] = {10,20,30,40};  This is allowed in c but not in Java, compiler will generate error

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);

        System.out.println(Arr.length);

        int Arr1[] = new int [4];    //dynamic way to write array
        Arr1[0] = 10;
        Arr1[1] = 20;
        Arr1[2] = 30;
        Arr1[3] = 40;

        System.out.println(Arr1.length);
    }
}