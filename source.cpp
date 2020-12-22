#include <iostream>
#include <string>
using namespace std;


string getWelMsg ( string name, string gender) {
  
  string title = "";
  
  if ( gender == "male" ||  gender == "Male"  ) {
  
    title = "Mrs. ";

  } else if ( gender == "female" ||  gender == "Female"  ) {
  
    title = "Miss. ";

  } else {
  
    return NULL;
    
  }
  
  string WelMsg = title + name + ", Welcome";
  
  return WelMsg;

}
 
int main () {

  string name = "";

   std::cout << " Please Enter your name: \n";
   std::cin >> name;
  
   string given_gender = "";

   std::cout << " Please Enter your gender: \n";
   std::cin >> given_gender;
  
  string WelMsg = getWelMsg( name, given_gender);
  
  std::cout << WelMsg << "\n";
  
  return 0;
  

}
