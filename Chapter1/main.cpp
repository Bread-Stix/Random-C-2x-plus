#include <iostream>

int main()
{
   /* learncpp.com Question#3 asks us to write a program, enter
   the first and the second number. Program should tell the user
   what the result of adding and subtracting the two numbers
   given through input. */

   /*time was 2 minutes and 43 seconds to code, i am slower than most
   people, i plan to improve my speed and understanding. */

   int num1{};
   int num2{};


   std::cout << "Please enter the first integer : ""\n";
   std::cin >> num1;
   std::cout << "Enter the second integer: ""\n";
   std::cin >> num2;


   std::cout << "The number " << num1 << " + " << num2 << " is " << num1+num2 <<".\n";
   std::cout << "While " << num1 << " - " << num2 << " is " <<num1-num2 << std::endl;

   return 0;
}
