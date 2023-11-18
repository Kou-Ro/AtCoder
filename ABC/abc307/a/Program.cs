using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        string[] s = Console.ReadLine().Split(' ');
        var a = new List<int>();
        for (int i = 0; i < n * 7; i++)
        {
            a.Add(int.Parse(s[i]));
        }

        int sum = 0;
        for (int i = 0; i < n*7; i++)
        {
            
            sum += a[i];
            
			if(i%7==6)
			{
            Console.Write(sum);
            Console.Write(" ");
            sum = 0;
			}
        }
            
    }
}
