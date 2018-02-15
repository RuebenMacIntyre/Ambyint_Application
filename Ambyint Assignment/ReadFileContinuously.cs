using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Sockets;
using System.IO;
using System.Net;

namespace ReadFileContinuously
{
    class Program
    {
        static void Main(string[] args)
        {
            // read the data file and write to the output every 150 ms until the user hits Enter key
            while (!(Console.KeyAvailable && Console.ReadKey(true).Key == ConsoleKey.Enter))
            {
                DateTime startDateTime = DateTime.Now;
                DateTime endDateTime = DateTime.Now;
                int counter = 0;
                string line = "";
                int sum = 0;

                System.IO.StreamReader file = new System.IO.StreamReader("data");
                System.IO.StreamWriter output = new System.IO.StreamWriter("output");

                // Continuously read the file line by line.  
                while ((line = file.ReadLine()) != null && (endDateTime - startDateTime).Milliseconds < 150)
                {
                    Int16 value = Convert.ToInt16(line);
                    sum += value;

                    counter++;
                    endDateTime = DateTime.Now;
                }

                output.WriteLine("sum of {0} lines read in {1} milliseconds = {2}", counter, (endDateTime - startDateTime).Milliseconds, sum);
                output.Close();
                output.Dispose();

                // Rename the output.txt file.
                if (File.Exists("outputOld"))
                {
                    File.Delete("outputOld");
                }

                File.Move("output", "outputOld");

                file.Close();
                file.Dispose();

                System.Console.WriteLine("sum of {0} lines read in {1} milliseconds = {2}", counter, (endDateTime - startDateTime).Milliseconds, sum);
                sum = 0;
            }
        }
    }
}