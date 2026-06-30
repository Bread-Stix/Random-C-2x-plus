#include <iostream>

using namespace std;

int main()
{
    // Lesson: 1.7 - 1.10; short exercise.
    // testing literals, its direct
    std::cout<<1+2<<'\n';

    //testing actual values stored in variables by typing them out
    // i have done operators before but practice makes perfect.

    std::cout<<"This is another literal. If I just say 2+3, it is 5"<<'\n';
    std::cout<<2+3<<endl;

    /* this line of code shows how the variable holds a value after
    the input is received from the user while the it processes. */

    int x{};
    std::cout<<"Try this instead, type any number."<<'\n';
    std::cin>>x;
    // siince
    std::cout<<"The value you have typed in is "<<x<<endl;

    /* so far i have learned that i tend to forget and
    switch the operands << and >> between the cin and cout.
    I need more practice. Good format and comment habits..?*/


    return 0;
}
