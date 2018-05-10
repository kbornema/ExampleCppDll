using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace ExampleCppDllImport
{
    class Program
    {
        static void Main(string[] args)
        {
            World w = new World();

            var actor = w.CreateActor(3.14f, 0.0f, 42f);
            Console.WriteLine(actor.GetX());

            actor.Move(-3.14f, 0.0f, 0.0f);
            Console.WriteLine(actor.GetX());

            var actor2 = w.CreateActor(0.0f, 1000.0f, 0.0f);

            Console.WriteLine(w.GetNumActors());

        }
    }
}
