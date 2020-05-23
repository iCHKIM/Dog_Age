#include <iostream>

int main() {
  //Input your own dogs age after the = the example age is set to 6.
  int dog_age = 6;
  dog_age = dog_age;

  int early_years, later_years, human_years;

  //The first two years of a dog's life count as 21 human years.
  early_years = 21;
  
  //Each following years couts as 4 human years.
  later_years = (dog_age - 2) * 4;
  
  //Adding Early and Later years, while storing inside the var Human
  human_years = early_years + later_years;
  
  //You can change your dogs name too! Just replace "Chewy"!
  std::cout << "My name is Chewy! " << "I am " << human_years << "years old in human years.\n"; 
 
}
