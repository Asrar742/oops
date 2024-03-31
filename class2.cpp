//Nesting of memeber functions
#include<iostream>
#include<string>
using namespace std;

class binary{


    string s;
    private:
void chk_bin(void); // check kaega 
 public:
    void read(void);  // bianry ko read karega
   // void chk_bin(void); // check kaega 
    void ones_compliment(void); // compiment dega (0-->1,1-->0)
    void display(void); // will display

};
void binary :: read(void){
    cout<<"enter binary number"<<endl;
    cin>>s;

}
void binary:: chk_bin(void){
    for(int i = 0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(1)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }

    }
}
void binary :: ones_compliment(void){
    chk_bin();
    for (int i = 0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else//(s.at(i)=='1') else k andar condition nhi atte.
          { 
             s.at(i)='0';
        }
           }
}
void binary :: display(void){
    for (int i = 0;i<s.length();i++){
        cout<<s.at(i)<<" ";
    }


}




int main(){
    binary b;
    b.read();
   // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
}
