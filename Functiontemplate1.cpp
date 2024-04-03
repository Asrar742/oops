// Function template
#include<iostream>
using namespace std;
template<class T> T add(T &a,T &b){
    T result = a+b;
    return result;

}
int main(){
    int i = 2;
    int j = 3;
    float m= 5.6;
    float n = 6.6;

    cout<<"Addition of i&j is :"<<i+j<<endl;
    cout<<"Addition of m&n is :"<<m+n<<endl;
    return 0;

}