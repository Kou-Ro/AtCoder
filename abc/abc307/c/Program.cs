using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        string[] As=Console.ReadLine().Split(' ');
        int ha=int.Parse(As[0]);
        int wa=int.Parse(As[1]);
        var a = new List<int[]>();
        for (int i = 0; i < ha; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < wa; j++)
            {
                if (s[j] == '#')
                {
                    a.Add({i,j});
                }
            }
        }
        string[] Bs=Console.ReadLine().Split(' ');
        int hb=int.Parse(Bs[0]);
        int wb=int.Parse(Bs[1]);
        var b = new List<int[]>();
        for (int i = 0; i < hb; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < wb; j++)
            {
                if (s[j] == '#')
                {
                    b.Add([i,j]);
                }
            }
        }
        string[] Xs=Console.ReadLine().Split(' ');
        int hx = int.Parse(Xs[0]);
        int wx = int.Parse(Xs[1]);
        var x=new List<int[]>();
        for (int i = 0; i < hx; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < wx; j++)
            {
                if (s[j] == '#')
                {
                    x.Add([i,j]);
                }
            }
        }

        for (int i = 0; i < x.Count; i++)
        {
            bool fa = true;
            int sha = x[i][0] - a[0][0];
            int swa = x[i][1] - a[0][1];
            for (int j = 0; j < a.Count; j++)
            {
                for (int k = 0; k < x.Count; k++)
                {
                    if(![a[j][0]+sha,a[j][1]+swa].SequenceEqual(x[k]))
                    {
                        fa = false;
                        break;
                    }
                }
                if (!fa)
                {
                    break;
                }
            }

            bool flag = true;
            if (fa)
            {
                for (int j = 0; j < x.Count; j++)
                {
                    int shb = x[i][0]-b[0][0];
					int swb = x[i][0]-b[0][1];
					bool fb=true;
					var all=new List<int>();
                    for(int k=0;k<a.Count;k++){
                        all              
                }
            }
        }
    }
}
