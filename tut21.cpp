#include<iostream>
using namespace std;
// class and struct are almost equivalent but
//     the items stored in struct can be accessed from anywhere in program while in class it can be accessed through function only
//     i.e. no security of data
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
    //     }
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    tut21 cat;
    tut21 swan;
    cat.krishna(a, b, c);
    swan.krishna(100,107,108);
    cat.d=4;
    cat.e=5;
    swan.d=9;
    swan.e=10;
    cat.getData();
    swan.getData();
    
    
    
    return 0;
}