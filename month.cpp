#include <iostream>

int main(){
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;

    std::cout << "Enter month: ";
    int month;
    std::cin >> month;

    std::cout << "" << std::endl;

    if(month == 1 || month == 3 || month == 5 || month == 8 || month == 10 || month == 12)
        std::cout << "31 days" << std::endl;
    else if(month == 2){
        if(year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
            std::cout << "29 days" << std::endl;
        else
            std::cout << "28 days" << std::endl;
    }
    else
        std::cout << "30 days" << std::endl;

    return 0;
}