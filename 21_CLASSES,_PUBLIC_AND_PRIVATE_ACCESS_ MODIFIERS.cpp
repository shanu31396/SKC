//  CLASSES, PUBLIC AND PRIVATE ACCESS MODIFIERS

#include<iostream>
using namespace std;
// class and struct are almost equivalent but
//     the items stored in struct can be accessed from anywhere in program while in class it can be accessed through functions only
//     i.e. there is no security of data in case of struct
//     and we can't create functions in struct
//     because of these two reasons we use class instead of struct
class tut21
    {
    private:
       int a,b,c;
    public:
        int d,e;
        //      [FIRST METHOD]void krishna(int a1, int b1, int c1);     //FUNCTION PROTOTYPE
        /*      [SECOND METHOD]*/ void krishna(int a1, int b1, int c1){       
            a=a1;
            b=b1;
            c=c1; 
        }
        void getData(){
            cout<<"The value of a is :"<<a<<endl;
            cout<<"The value of b is :"<<b<<endl;
            cout<<"The value of c is :"<<c<<endl;
            cout<<"The value of d is :"<<d<<endl;
            cout<<"The value of e is :"<<e<<endl;
            cout<<endl;
    }
    };
    // [FIRST METHOD]       void tut21::krishna(int a1, int b1, int c1){
    //         a=a1;
    //         b=b1;
    //         c=c1;
    //     }    there is no need of semicolon here 
int main(){

    int a,b,c;
    cout<<"Enter the values of a, b and c : ";
    cin>>a>>b>>c;
    tut21 cat;
    cat.krishna(a, b, c);
    cat.d=4;
    cat.e=5;
    cat.getData();

    int d,e,f;
    cout<<"Enter the values of d, e and f : ";
    cin>>d>>e>>f;
    tut21 swan;
    swan.krishna(d, e, f);
    swan.d=9;
    swan.e=10;
    swan.getData();
    
      return 0;
}