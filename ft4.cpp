#include<iostream>
using namespace std;
 void fun(double a){
    cout<<"value of a is : "<<a<<endl;
 }
 void fun(int b){

    if(b%2==0)
 
 cout<<"number is even";
  else
  cout<<"number is odd";
 
 }
 int main(){
    fun(4.0);
    fun(6);
    return 0;
 }
    