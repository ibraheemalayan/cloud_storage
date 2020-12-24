#include <iostream>

int main() {
    
    int input;
    
    std::cout << "Enter a 3-digit number:";
    std::cin >> input;
    
    // divide by 10 to get rid of the last digit so you have only 1st and 2nd
    input = input / 10;
    
    // divide by 10 to get 2nd digit as the remaining
    int second_digit = input % 10;
    
    // divide by 10 to get rid of the last digit so you have only 1st
    input = input / 10;
    
    // divide by 10 to get 2nd digit as the remaining
    int first_digit = input % 10;
    
    // after getting first and second digit
    // we check if they are odd or mean numbers 
    
    if( (second_digit % 2) == 0 && (first_digit % 2) == 0 ){
         std::cout << "Mohammad";
    } else {
        std::cout << (10 + second_digit);
    }
    
    

    return 0;
}
