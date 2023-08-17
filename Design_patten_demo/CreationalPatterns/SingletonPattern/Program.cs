<<<<<<< HEAD
﻿using System;
using System.Threading;
using System.Threading.Tasks;

namespace SingletonPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            var thread1 = new Thread(() => OngdevSingleton.GetInstance().SaysHi());
            var thread2 = new Thread(() => OngdevSingleton.GetInstance().SaysHi());

            thread1.Start();
            thread2.Start();
        }
    }
}
=======
﻿using System;
using System.Threading;
using System.Threading.Tasks;

namespace SingletonPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            var thread1 = new Thread(() => OngdevSingleton.GetInstance().SaysHi());
            var thread2 = new Thread(() => OngdevSingleton.GetInstance().SaysHi());

            thread1.Start();
            thread2.Start();
        }
    }
}
>>>>>>> 46171bafc32edbca31738f28145d2cb6863c2a1d
