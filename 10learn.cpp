#include <iostream>
#include <string>

using namespace std;

class Laptops{
private:
    string model;
    int price =0;
    int ram;
    int roll;
    static int id; 
public:
    void setAll(string,int,int);
    void getAll(); 
};

void Laptops::setAll(string str,int pri, int ra){
    id++;
    roll = id;
    model = str;
    price = pri;
    ram =ra; 
};
void Laptops::getAll(){
    cout<< "the id is "<< roll<<endl;
    cout<<"model of the laptop is "<<model<<endl;
    cout<<"price of the laptop is "<<price<<endl;
    cout<<"ram of the laptop is "<<ram<<" gb"<<endl;
}

int Laptops::id=20310000;

int main()
{
    Laptops vivobook;
    Laptops zenbook;
    Laptops macbook;

    vivobook.setAll("asus vivobook",36000,8 );
    zenbook.setAll("asus vivobook",36000,8 );
    macbook.setAll("asus vivobook",36000,8 );

    vivobook.getAll();
    zenbook.getAll();
    macbook.getAll();

}

