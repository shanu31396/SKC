#include <iostream>
using namespace std;

int main()
{
   int num,n, sum=0;
   cout<<"Enter the no. of numbers whose sum you want :";
   cin>>n;

   cout<<"Please enter "<<n<<" numbers:"<<endl;

  for(int i=1; i<=n; i++)
  {
   // input is stored in num
    cin>>num;

   // adding 10 numbers
    sum=sum+num;
  }
     cout << "\n The sum of 10 numbers is: "<<sum << endl;
     return 0;
}
 