import java.util.*;


class Collections
{
    public static void main(String arg [])
    {
        LinkedList <Integer> lobj = new LinkedList <Integer> ();
        
        lobj.add(11);
        lobj.add(21);
        lobj.add(41);
        lobj.add(81);

        System.out.println(lobj);

        lobj.addFirst(5);
        System.out.println(lobj);

        Iterator iobj = lobj.Iterator();

        while(lobj.hasNext())
        {
            System.out.println(lobj.next());
        }

    }
};