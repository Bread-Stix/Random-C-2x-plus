#include <iostream>

using namespace std;

/* Ask the user to enter three values. The program
should then print this values. Add an appropriate
comment above function main()
Code::Blocks 25.03
learncpp exercise 1.5: Introduction of iostream:cout,cin,endl
*/

int main()
{
   std::cout<<"Enter a three numbers: ";

   int x{};
   int y{};
   int z{};

   std::cin>>x>>y>>z;

   std::cout<<"You entered "<<x<<", "<<y<<" and "<<z<<'\n';


    return 0;
}
