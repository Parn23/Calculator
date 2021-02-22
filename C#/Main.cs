using static System.Console;
using static System.Convert;

namespace CalculatorCS
{
    class Program
    {
        static void Main(string[] args)
        {
            // Variable definitions
            int operation;
            int input1;
            int input2;
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
            operation = ToInt32(ReadLine());
            switch (operation)
            {
                case 1:
                    input1 = ToInt32(ReadLine());
                    input2 = ToInt32(ReadLine());
                    Basic.Add(input1, input2);
                    break;
                case 2:
                    input1 = ToInt32(ReadLine());
                    input2 = ToInt32(ReadLine());
                    Basic.Subtract(input1, input2);
                    break;
                case 3:
                    input1 = ToInt32(ReadLine());
                    input2 = ToInt32(ReadLine());
                    Basic.Multiply(input1, input2);
                    break;
                case 4:
                    input1 = ToInt32(ReadLine());
                    input2 = ToInt32(ReadLine());
                    Basic.Divide(input1, input2);
                    break;
                default:
                    WriteLine("Invalid value. Please rerun the program and try again.");
                    break;
            }

        }
    }
}