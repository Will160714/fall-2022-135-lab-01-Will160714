#include <iostream>

int main(){
    std::cout << "Enter the first number: ";
    int first_number;
    std::cin >> first_number;

    std::cout << "Enter the second number: ";
    int second_number;
    std::cin >> second_number;

    std::cout << "Enter the third number: ";
    int third_number;
    std::cin >> third_number;

    int smallest;
    if(first_number < second_number && first_number < third_number)
        smallest = first_number;
    else if(second_number < first_number && second_number < third_number)
        smallest = second_number;
    else
        smallest = third_number;
    
    std::cout << "" << std::endl;
    std::cout << "The smaller of the three is " << smallest << std::endl;
    
    return 0;
}