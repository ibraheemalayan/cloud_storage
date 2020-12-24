#include <iostream>

int main() {
    
    int salary;
    
    std::cout << "Enter your salary:";
    std::cin >> salary;
    
    if ( salary > 500 ){
        std::cout << "new salary is " << (salary*1.1);
    } else {
        std::cout << "new salary is " << (salary*1.2);
    }

    return 0;
}
