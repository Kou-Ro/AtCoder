using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        string[] st=Console.ReadLine().Split(' ');

        int n=int.Parse(st[0]);
        int m=int.Parse(st[1]);
        var s=new List<string>();
        for(int i=0;i<n;i++){
            s.Add(Console.ReadLine());
        }
        for(int i=0;i<n-8;i++){
            for(int j=0;j<m-8;j++){
                if(s[i].Substring(j,4)=="###."&&s[i+1].Substring(j,4)=="###."&&s[i+2].Substring(j,4)=="###."&&s[i+3].Substring(j,4)=="...."&&s[i+5].Substring(j+5,4)=="...."&&s[i+6].Substring(j+5,4)==".###"&&s[i+7].Substring(j+5,4)==".###"&&s[i+8].Substring(j+5,4)==".###"){
                    Console.WriteLine($"{i+1} {j+1}");
                }
            }
        }
    }
}

