#include <iostream>
#include <string>

    /*Assignment 3 focuses on int, double, and string data types. Improvement
    of programming formatting, interpretation of mathematic calculations with
    tax / percentages, practicing real-world concepts in coding. */


int main()
{
    std::string customerName{};
    std::string order1 {};
    std::string order2 {};
    std::string order3 {};

    int food1{}; // Food items are given a set price already.
    int food2{};
    int food3{};


    std::cout << "Good day customer, welcome to Stix's restaurant, what is your name?\n";
    std::cin >> customerName;
    std::cout << "Good day " << customerName << "! What is your first order of today?\n";
    std::cin >> order1;
    std::cout << "How many " << order1 << " would you like?\n";
    std::cin >> food1;


    std::cout << "Noted, how about your second order?\n";
    std::cin >> order2;
    std::cout <<"Okay, how many " << order2 << "?\n";
    std::cin >>food2;

    std::cout << "For your last order, what would you like? And then, how many?\n";
    std::cin >> order3 >> food3;

    std::cout << "Your orders are " << order1 << ", " << order2 << ", and " << order3 << ".\n";
    std::cout << "We will serve your food within twenty minutes, please be patient and thank you!\n";
    std::cout << "Below is a printed receipt of your order.\n";


    // prices are set by the system, so price 1-3 will be initialized, prices are in PHP currency.


    double price1{121.79};
    double price2{89.99};
    double price3{35.59};


    std::cout << "=====================================================\n";
    std::cout << "                   Stix's Restaurant                 \n";
    std::cout << "=====================================================\n";
    std::cout << "                                                     \n";
    std::cout << "Customer :" << customerName;
    std::cout << "                                   \n";
    std::cout << "Item             Qty       Price       Total         \n";
    std::cout << "-----------------------------------------------------\n";
    std::cout << order1 << "            "<< food1 << "      121.79        "<< food1 * price1  <<'\n';
    std::cout << order2 << "            "<< food2 << "       89.99        "<< food2 * price2 <<'\n';
    std::cout << order3 << "            "<< food3 << "       35.59        "<< food3 * price3 <<'\n';



    double customerFood = (food1 * price1) + (food2 * price2) + (food3 * price3);

    double vatAmount =  customerFood - (customerFood / 1.12);

    double customerFoodFinal = customerFood + (customerFood * 0.12);


    std::cout << "-----------------------------------------------------\n";
    std::cout << "Subtotal   :  " << customerFood << '\n';
    std::cout << "VAT (12%)  :  " << vatAmount << '\n';
    std::cout << "Amount due :  " <<customerFoodFinal <<std::endl;


    return 0;
}
