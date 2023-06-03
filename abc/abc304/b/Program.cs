using System;

struct Pro
{
    public static void Main(string[] args)
    {
        var n=Console.ReadLine();
        if(n.Length<=3)
        {
            Console.WriteLine(n);
            return;
        }
        for(int i=0;i<3;i++)
        {
            Console.Write(n[i]);
        }
        for(int i=3;i<n.Length ;i++)
        {
            Console.Write(0);
        }
    }
}