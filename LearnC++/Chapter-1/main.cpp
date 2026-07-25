#include <iostream>
#include <string>

    /* Assignment 2: Write a very simple program that records a student's information.
    Requirements: Ask the user for the following information:
    Student name
    Student ID (integer)
    Course name
    Current year level (integer)
    Favorite subject*/

int main()
{
    int studentID{};
    int yearLevel{};
    std::string studentName{};
    std::string studentCourse{};
    std::string favoriteSubject{};

    std::cout << "Dear student, please give us your name.\n";
    std::cin >> studentName;
    std::cout << "Second, please give us your school I.D.\n";
    std::cin >> studentID;
    std::cout << "Third, we require your chosen course for this year level.\n";
    std::cin >> studentCourse;
    std::cout << "Fourth, please state your year level.\n";
    std::cin >>yearLevel;
    std:: cout  << "Finally, kindly tell us your favorite subject.\n";
    std::cin >> favoriteSubject;

    // once input is given, student information report will be generated.

    std::cout << "=====================================\n";
    std::cout << "       Student Information Report    \n";
    std::cout << "=====================================\n";
    std::cout << "Name: " << studentName << '\n';
    std::cout << "Student ID: " << studentID << '\n';
    std::cout << "Course: " << studentCourse << '\n';
    std::cout << "Year Level: " << yearLevel <<'\n';
    std::cout << "Favorite Subject: " << favoriteSubject <<'\n';
    std::cout << "                                      \n";
    std::cout << "=====================================\n";
    std::cout << "                                      \n";
    std::cout << "Record saved successfully." << std::endl;

    return 0;
}
