//Authors: Aero Zajac
#include <iostream>
#include <string>

int main()
{
    
    std::string noun1;
    float number1;
    int number2;

    std::cout<< "Please enter a place you would like to live." <<std::endl;
    std::cin>> noun1;
    std::cout<< "Please enter a float." <<std::endl;
    std::cin>> number1;
    std::cout<< "Please enter a interger." <<std::endl;
    std::cin>> number2;

    std::cout<< "You now live in the remote location of "<<noun1<<"." <<std::endl;
    std::cout<< "You started a new diet and now weigh "<<number1<<"." <<std::endl;
    std::cout<< "Unfortunately due too a random boating accident your new iq is "<<number2<<"." <<std::endl;

  return 0;
}



