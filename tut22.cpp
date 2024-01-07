// OOPs recap and nesting of member functions in C++

 // OOPs - classes and objets
   /*
    C++ was initally called C with classes by Bjarne Stroustrup
    Class is just an extension of structures (in C)
    Structures had limitations 
            --> members(functions) are public
            --> no method(values)
    Classes can have method(functions) and properties(values)
    Classes can make few members as private and few as public as per our requirement
    Class have everything as private by default, we have to write public if we wish to make something public
        but it's not compulsory to write private if we wish to declare something as private
        however we generally write private to make everything understandable

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

#include<iostream>
#include<string>

using namespace std;

int main(){
  




    return 0;
}