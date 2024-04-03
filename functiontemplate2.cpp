//Function templates with multiple parameters
#include <iostream>  
using namespace std;  
template<class X,class Y> void fun(X a,Y b)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main()  
{  
   int a = 6;
   int b =7; 
   std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl; 
   
   
   return 0;  
}  