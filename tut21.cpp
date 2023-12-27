// CLASSES, PUBLIC AND PRIVATE ACCESS MODIFIERS

#include<iostream>
using namespace std;
int main(){
    /*
    class and struct are almost equivalent but
    the items stored in struct can be accessed from anywhere in program
    i.e. no security of data
    and we can't create functions in struct
    because of these two reasons we use class instead of struct
    */

   class tut21
   {
   private:
    /* data */
   public:
    tut21(/* args */);
    ~tut21();
   };
   
   tut21::tut21(/* args */)
   {
   }
   
   tut21::~tut21()
   {
   }
   
    return 0;
}