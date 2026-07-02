#include <iostream>
using namespace std;
int main()

//  learncpp.com Chapter 1.11
//  messing with integers and basic mathematical expressions.

{
    int num{};     // initialize and define as int


    std::cout << "Enter an integer: " << endl;
    std::cin >> num;
    std::cout << "You have entered the integer: " <<num << '\n';

                   /* num * 2 will double num's value, replaces user input
                   so here is a better version that doubles and triples
                   the number given by the user. */

    std::cout << "The double of " << num << " is " << num * 2 << '\n';
    std::cout << "Then, the triple of " << num <<" is just " << num * 3 << '\n';

                   /* as mentioned in line 16, my original solution was
                   num * 2 but it would replace the user input's given value,
                   this would then make me initialize another variable and
                   make the code longer. */

    return 0;
}
