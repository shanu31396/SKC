#include<iostream>
using namespace std;
class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void){
    cout<<"Enter the Id no. of your item  "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void){
    for(int i=0;i<counter;i++){
cout<<"The price of item Id no. "<<itemId[i]<<" is "<<itemPrice[i]<<" ."<<endl;
    }
}
int main(){
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}
