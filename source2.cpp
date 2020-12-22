// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int findLetters( std::string name, char *charArray, int size){
    for (int i = 0; i < name.size(); i++) {
        bool found_char = false;
        for( int k = 0 ; k < size ; k++) {
            if (name[i] == charArray[k]){
                found_char = true;
            }
        }
        if (!found_char){
            return 0;
        }
    }
    return 1;
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    
    std::string name = "Hehlo";
    char charArr[] = { 'H', 'e', 'l','h', 'o', '\0' };
    
    std::cout << findLetters( name, charArr, 20);

    return 0;
}

