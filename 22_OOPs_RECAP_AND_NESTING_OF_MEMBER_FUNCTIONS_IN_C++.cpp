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
 class have everything as private by default, we have to write "public" if we want to make something public
 but it's not compulsory to write private in case to make something private
 however, we generally write private to make everything understoodable

 Structures in C++ are typedefed
 you can declare objects along with the class declaration
 eg. class Employee{
     // class definition
     } harry, rohan, lovish

 harry.salary = 9 makes no sense if salary is private
 i.e. overwriting of private variables is not possible

 now coming to the topic which is

 NESTING OF MEMBER FUNCTIONS

    if you have a function that you created earlier and it uses your private variable or any kind of function it is,
    you can call another function from that function without using dot

 */

#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin();

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin();
    // here, we called chk_bin function to check automatically that whether entered number is binary or not without using any dot (.) with function call
    // this is called nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number's complement :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    binary b;
    b.read();
    //b.chk_bin();   ## To use chk_bin automatically even without calling it seperately, Nesting of member functions came into use
    // after testing chk_bin here the function had moved into private access
    // now, no one from outside the class can access the function
    // so the conclusion is that a function whether public or private can be called from another function
    // and this is called nesting of member function
    b.ones_complement();
    b.display();
    return 0;
}