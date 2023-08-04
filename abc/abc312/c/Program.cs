using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        string[] ss=Console.ReadLine().Split(' ');
        int n=int.Parse(ss[0]);
        int m=int.Parse(ss[1]);
        string[] ass=Console.ReadLine().Split(' ');
        string[] bss=Console.ReadLine().Split(' ');
        var a=new SortedSet<int>();
        var b=new SortedSet<int>();
        for(int i=0;i<n;i++){
            a.Add(int.Parse(ass[i]));
        }
        for(int i=0;i<m;i++){
            b.Add(int.Parse(bss[i]));
        }

        if(a[0]<b[m-1]){
            Console.WriteLine(a[0]);
        }
        else{
            Console.WriteLine(b[m-1]+1);
        }
    }
}

