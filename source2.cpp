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

void rearrange( std::string name, char *charArray, int size){
    
    char name_letters[name.size()];
    char non_name_letters[ ( size - name.size() ) ];
    
    char new_char_array[size];
    
    int k = 0;
    int j = 0;
    int i = 0;
    
    while( i < size ){
        
        bool char_in_name = false;
        
        for(int l = 0; l < name.size(); l++){
          if(name[l] == charArray[i]){
            char_in_name = true;
          }
        }
        
        
        
        if( char_in_name ){
            new_char_array[k] = charArray[i];
            k ++;
        } else {
            new_char_array[j+name.size()] = charArray[i];
            j ++;
        }
        
        i ++ ;
    }
    
    std::cout << new_char_array;
    }

int main() {
    
    std::string name = "Hehlo";
    char charArr[] = { 'H', 'e', 'l','h', 'f', '\0' };
    
    std::cout << findLetters( name, charArr, 20);
    
    rearrange( name, charArr, 20);

    return 0;
}



int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    
    std::string name = "Hehlo";
    char charArr[] = { 'H', 'e', 'l','h', 'o', '\0' };
    
    std::cout << findLetters( name, charArr, 6);

    return 0;
}

