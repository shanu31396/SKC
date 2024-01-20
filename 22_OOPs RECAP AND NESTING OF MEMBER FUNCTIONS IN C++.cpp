// OOPs RECAP AND NESTING OF MEMBER FUNCTIONS IN C++

// OOPs - classes and objets
/*
 C++ was initally called C with classes by Bjarne Stroustrup
 class is just an extension of structures (in C)
 structure had limitations
         --> members are public
         --> no method
 classes can have method(functions) and properties(values)
 classes can make members as private and public as per our need
 class have everything as private by default, we have to write public if we wish to make something public
 but it's not compulsory to write private if we wish to declare something as private
 however, we generally write private to make everything understoodable

 Structures in C++ are typedefed
 you can declare objects along with the class declaration
 eg. class Employee{
     // class definition
 } harry, rohan, lovish

 harry.salary = 9 makes no sense if salary is private
 i.e. overwriting of private variables in not possible

 now coming to the topic which is   

 NESTING OF MEMBER FUNCTIONS
     ---> agar aapka koi v ek function hai jo ki aapne already bana rakha hai
     wo aapka koi private variable use kar raha hai ya kisi v tarah ka function hai
     to aap us fnction k andar se dusre function ko call kar sakte hain bina dot lagae

     we can call another function from a function without using dot
 */
 
#include <iostream>
#include <string>

using namespace std;

class binary
{
    private:
            void chk_bin();
    public:
            void read(void);
            void ones_complement(void);
            void display(void);
};



int main()
{

    return 0;
}