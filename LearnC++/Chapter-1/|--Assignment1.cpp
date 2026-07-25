#include <iostream>
#include <string>

// Assignment 1 - Superhero Profile Generator.

int main()
{
    int yourAge{};
    std::string yourName{};
    std::string favoriteSuperhero{};

    std::cout << "Could you tell us your name, age and your favorite superhero in that order?\n";
    std::cin >>yourName;
    std::cin >>yourAge;
    std::cin >>favoriteSuperhero;


    std::cout << "=======================\n";
    std::cout << "     Hero Profile      \n";
    std::cout << "=======================\n";
    std::cout << "Name: " << yourName <<'\n';
    std::cout << "Age: " << yourAge << '\n';
    std::cout << "Favorite Hero: " << favoriteSuperhero << '\n';

    std::cout << "You have successfully created your profile!" <<std::endl;


    /* my original solution / code is not here but I used the
    data types of int instead of string originally, thus my
    code had a logic error originally. As you may see, I have
    replaced it with the correct data type. */

    return 0;

}
