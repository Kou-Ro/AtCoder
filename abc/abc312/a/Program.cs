using System;
using System.Collections.Generic;

struct Program
{
    static void Main(string[] args)
    {
        string[] lis={"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
        string s=Console.ReadLine();
        for(int i=0;i<lis.Length;i++){
            if(lis[i]==s){
                Console.WriteLine("Yes");
                return;
            }
        }
        Console.WriteLine("No");
    }
}

