#include<iostream>
using namespace std;

struct nameage
{
    char name[20];
    int age;
};

int main()
{
    nameage tushar={"Tushar",24};
    cout<<tushar.name<<" "<<tushar.age<<endl;
}
