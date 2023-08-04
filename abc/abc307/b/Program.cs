using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        int n=int.Parse(Console.ReadLine());
        var s = new List<string>();
        for (int i = 0; i < n; i++)
        {
            s.Add(Console.ReadLine());
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    string str = s[i] + s[j];
                    bool flag = true;
                    for (int k = 0; k < str.Length; k++)
                    {
                        if (str[k] != str[str.Length - k - 1])
                        {
                            flag = false;
                        }
                    }

                    if (flag)
                    {
                        Console.WriteLine("Yes");
                        return;
                    }
                }
            }
        }
        Console.WriteLine("No");
    }
}
