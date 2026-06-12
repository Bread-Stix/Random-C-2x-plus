#include <iostream>

using namespace std;
// testing for basic calculator and exercise for the programmer
// must edit too many variables, make it look cleaner. My professor says "Make the program sexy".
int main()
{
    int x, y, z, q, a, b, c, d, addition, subtraction, multiplication, division;

    cout<<"Let us try help the programmer do basic mathematical calculations through programming."<<endl;
    cout<<"Give the programmer two numbers to add together."<<endl;
    cin>>x>>y;

    addition = x + y;

    cout<<"The numbers "<<x<<" and "<<y<<" are equivalent to "<<addition<<endl;

    cout<<"How about subtraction? Give the programmer to test two numbers to subtract with. Remember, the first number must be larger than the second."<<endl;
    cin>>z>>q;

    subtraction =  z - q;


    cout<<q<<" subtracted from "<<z<<" is equal to "<<subtraction<<endl;
    cout<<"Great! Let's try multiplication. Give the program two numbers to multiply."<<endl;
    cout<<"For the first one."<<endl;
    cin>>a;
    cout<<"Now for the second number."<<endl;
    cin>>b;

    multiplication = a * b;

    cout<<"You were given the answer of "<<multiplication<<endl;

    cout<<"We're almost at the end of this program. The programmer needs to test one more mathematical concept, division."<<endl;
    cout<<"Remember, the first number must be larger than the second number. Make sure it is an integer."<<endl;
    cin>>c>>d;

    division = c / d;

    cout<<c<<" divided by "<<d<<" is equivalent to "<<division<<endl;

    return 0;
}
