using System;
using static System.Console;

namespace CalculatorCS
{
    class Program
    {
        static void Main(string[] args)
        {
            // Variable definitions
            ConsoleKeyInfo operation;
            ConsoleKeyInfo input1;
            ConsoleKeyInfo input2;
            // Main code
            WriteLine("             Calculator\n" +
                      "--------------------------------------");
            WriteLine(
                      "   1) Add\n" +
                      "   2) Subtract\n" +
                      "   3) Multiply\n" +
                      "   4) Divide\n" +
                      "   5) Exponential\n" +
                      "   6) Square root");
            operation = ReadKey();
        }
    }
}