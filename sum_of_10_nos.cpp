#include <iostream>
using namespace std;

int main()
{
   int num, sum=0;

   cout<<"Please enter 10 numbers:"<<endl;

  for(int i=0; i<10; i++)
  {
   // input is stored in num
    cin>>num;

   // adding 10 numbers
    sum=sum+num;
  }
     cout << "\n The sum of 10 numbers is: "<<sum << endl;
     return 0;
}
