class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is Running" + Thread.currentThread().getName());
    }
}

class ThreadDemo4
{
    public static void main (String A[])
    {
        System.out.println("Inside Main Thread");
        
        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.setName("PPA");

        tobj.start();

        

    }
}