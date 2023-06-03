using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        int n=int.Parse(Console.ReadLine());
        var s=new List<string[]>();
        for(int i=0;i<n;i++)
        {
            var re=Console.ReadLine().Split(' ');
            s.Add(re);
        }

        int mino=(int)Math.Pow(10,9);
        int ind=0;
        //Console.WriteLine(mino);

        int j=0;
        for(j=0;j<n;j++)
        {
            if(int.Parse(s[j][1])<mino)
            {
                mino=int.Parse(s[j][1]);
                ind=j;
            }
        }

        j=ind;
        do
        {
            Console.WriteLine(s[j][0]);
            j++;
            if(j>=n)j=0;
        }while(j!=ind);

    }
}
