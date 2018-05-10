using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace ExampleCppDllImport
{
    class World : IDisposable
    {
        private IntPtr _worldPtr;

        public World()
        {
            _worldPtr = CreateWorld();
        }

        public void Dispose()
        {
            DeleteWorld(_worldPtr);
            _worldPtr = IntPtr.Zero;
        }

        public Actor CreateActor(float x, float y, float z)
        {
            Actor a = new Actor(CreateActor(_worldPtr, x, y, z));
            return a;
        }

        public int GetNumActors()
        {
            return GetNumActorsDll(_worldPtr);
        }

        [DllImport(MyDll.DLL_NAME, EntryPoint = "createWorldPtr")]
        public static extern IntPtr CreateWorld();

        [DllImport(MyDll.DLL_NAME, EntryPoint = "deleteWorldPtr")]
        public static extern void DeleteWorld(IntPtr world);

        [DllImport(MyDll.DLL_NAME, EntryPoint = "createActorPtr")]
        public static extern IntPtr CreateActor(IntPtr worldPtr, float x, float y, float z);

        [DllImport(MyDll.DLL_NAME, EntryPoint = "getNumActors")]
        public static extern int GetNumActorsDll(IntPtr wPtr);
    }
}
