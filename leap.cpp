#include <iostream>

int main(){
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;

    std::cout << "" << std::endl;

    if(year % 4 != 0)
        std::cout << "Common Year" << std::endl;
    else if(year % 100 != 0)
        std::cout << "Leap Year" << std::endl;
    else if(year % 400 != 0)
        std::cout << "Common Year" << std::endl;
    else
        std::cout << "Leap Year" << std::endl;

    return 0;
}