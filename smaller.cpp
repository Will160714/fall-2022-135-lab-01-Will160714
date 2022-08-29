#include <iostream>

int main(){
    std::cout << "Enter the first number: ";
    int first_number;
    std::cin >> first_number;

    std::cout << "Enter the second number: ";
    int second_number;
    std::cin >> second_number;

    std::cout << "" << std::endl;

    if(first_number > second_number){
        std::cout << "The smaller of the two is " << second_number << std::endl;
    }
    else{
        std::cout << "The smaller of the two is " << first_number << std::endl;
    }
    
    return 0;
}