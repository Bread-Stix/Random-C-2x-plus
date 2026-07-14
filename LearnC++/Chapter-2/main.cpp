#include <iostream>

    //functions test, testing float numbers instead of the normal int data type.
    //i did not use double because i am just testing this program, no need for precision.
float getNumbers()
{
    float number;
    std::cout << "Give the programmer a number to work with.\n";
    std::cin >> number;

    return number;
}

int main()
{
    float x{getNumbers()};

    float y{getNumbers()};

        // Addition
    std::cout << x << " + " << y << " = " << x + y <<'\n';

        //Subctraction
    std::cout << x << " - " << y << " = " << x - y <<'\n';

        // Multiplication
    std::cout << x << " X " << y << " = " << x * y <<'\n';

        // Division
    std::cout << x << " / " << y << " = " << x / y <<'\n';

    // need to work on function parameters.



    return 0;
}
