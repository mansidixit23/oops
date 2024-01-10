#include<iostream>
using namespace std;
class abc
{
    public:
    abc();
    class x 
    {
        public:
        x();
    };
};
abc::abc()
{
    cout<<"abc class constructor"<<endl;
}
abc::x::x()
{
    cout<<"x class constructor"<<endl;
}
int main()
{
    abc object;
    abc::x object2;
    return 0;
}