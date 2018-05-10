using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace ExampleCppDllImport
{
    class Actor
    {
        private IntPtr _intPtr;

        public Actor(IntPtr ptr)
        {
            _intPtr = ptr;
        }

        public void MakeInvalid()
        {
            _intPtr = IntPtr.Zero;
        }

        public void Move(float dx, float dy, float dz)
        {
            MoveActor(_intPtr, dx, dy, dz);
        }

        public float GetX()
        {
            return GetX(_intPtr);
        }

        public float GetY()
        {
            return GetY(_intPtr);
        }

        public float GetZ()
        {
            return GetZ(_intPtr);
        }

        [DllImport(MyDll.DLL_NAME, EntryPoint = "moveActorPtr")]
        public static extern void MoveActor(IntPtr actor, float dx, float dy, float dz);
        
        [DllImport(MyDll.DLL_NAME, EntryPoint = "getX")]
        public static extern float GetX(IntPtr actor);
        [DllImport(MyDll.DLL_NAME, EntryPoint = "getY")]
        public static extern float GetY(IntPtr actor);
        [DllImport(MyDll.DLL_NAME, EntryPoint = "getZ")]
        public static extern float GetZ(IntPtr actor);
    }
}
