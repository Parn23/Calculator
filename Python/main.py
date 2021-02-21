from basic import *
from advanced import *
import math

# operation = None
input1 = None
input2 = None
input3 = None;
print("             Calculator\n"
      "--------------------------------------\n")
print("   1) Add\n"
      "   2) Subtract\n"
      "   3) Multiply\n"
      "   4) Divide\n"
      "   5) Exponential\n"
      "   6) Square root\n")
input1 = input()
if input1 == "1":
    input2 = input()
    input3 = input("+\n")
    add(input2, input3)
elif input1 == "2":
    input2 = input()
    input3 = input("-\n")
    subtract(input2, input3)
elif input1 == "3":
    input2 = input()
    input3 = input("x\n")  # Like in the C++ version, the unicode multiplication symbol will not display properly
    multiply(input2, input3)
elif input1 == "4":
    input2 = input()
    input3 = input("/\n")
    divide(input2, input3)
elif input1 == "5":
    input2 = input()
    input3 = input("^\n")
    expo(input2, input3)
elif input1 == "6":
    input2 = int(input("Find the square root of: "))
    sqrt(input2)
else:
    print("Invalid value, please try again")
