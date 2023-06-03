using System;
using System.Collections.Generic;

namespace AtCoder
{
    class Prog
    {
        static List<People> ps=new List<People>();
        static int n;
        static int d;
        public static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            n =int.Parse(s[0]);
            d= int.Parse(s[1]);



            for(int i=0; i<n; i++)
            {
                s=Console.ReadLine().Split(' ');
                ps.Add(new People(int.Parse(s[0]), int.Parse(s[1])));
            }

            ps[0].inf=true;
            Check(0);

            foreach(People p in ps)
            {
                if(p.inf)
                {
                    Console.WriteLine("Yes");
                }
                else
                {
                    Console.WriteLine("No");
                }
            }
        }

        public static void Check(int ind)
        {
            for(int i=0;i<n;i++)
            {

                if(!ps[i].inf&&Math.Pow(Math.Pow((ps[i].x-ps[ind].x),2)+Math.Pow((ps[i].y-ps[ind].y),2),0.5)<=d)
                {
                    //Console.WriteLine($"{ind} {i} : {Math.Pow(Math.Pow((ps[i].x-ps[ind].x),2)+Math.Pow((ps[i].y-ps[ind].y),2),0.5)}");
                    ps[i].inf=true;

                    Check(i);
                }
            }
        }
    }

    class People
    {
        public int x{get;set;}
        public int y{get;set;}
        public bool inf{get;set;}=false;

        public People(int x,int y)
        {
            this.x=x;
            this.y=y;
        }
    }
}