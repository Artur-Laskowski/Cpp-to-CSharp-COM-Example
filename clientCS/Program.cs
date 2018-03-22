using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ALStack;

namespace clientCS
{
    class Program
    {
        static void Main(string[] args)
        {
            int v;
            IStack k = new Stack();
            k.Push(13);
            k.Pop(out v);
            System.Console.WriteLine("{0}", v);
        }
    }
}
