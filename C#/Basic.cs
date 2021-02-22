using static System.Convert;
using static System.Console;

namespace CalculatorCS
{
    public class Basic
    {
        public static void Add(int num1, int num2)
        {
            int num3 = num1 + num2;
            WriteLine("Answer: " + num3);
        }

        public static void Subtract(int num1, int num2)
        {
            int num3 = num1 - num2;
            WriteLine("Answer: " + num3);  
        }

        public static void Multiply(int num1, int num2)
        {
            int num3 = num1 * num2;
            WriteLine("Answer: " + num3);
        }

        public static void Divide(int num1, int num2)
        {
            int num3 = num1 / num2;
            WriteLine("Answer: " + num3);
        }
    }
}