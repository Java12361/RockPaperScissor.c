#include <iostream>
using namespace std; // if not use this

int main()
{
    bool isOlderThan18 = true;//true or false
    std::cout << "Hello World! \n";
    std::cout << "Today is Sunday" << endl;
    cout << "Welcome\n";

    cout << "Size of bool is " << sizeof(bool) << " bytes" << endl;

    cout << "Int min is " << INT_MIN << endl;
    cout << "Int max is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes" << endl;
    cout << "unsigned int max is " << UINT_MAX << endl;

    system("read -p 'Press Enter to continue.'");
}