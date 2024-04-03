/*Overloading a function template*/
#include <iostream>  
using namespace std;  
template<class X> void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> void fun(X b ,Y c)  
{  
   cout << "Value of b is : " <<b<<endl;  
   cout << "Value of c is : " <<c<<endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30.5);  
   return 0;  
}  
/* In the above example, template of fun() 
function is overloaded.*/