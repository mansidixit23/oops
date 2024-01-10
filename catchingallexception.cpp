#include<iostream>
using namespace std;
void xhandler(int test)
{
    try{
        if(test==0)  throw test;
        if(test==1)  throw 'a';
        if(test==2)  throw 123.23;

    }
    catch(...){
        cout<<"CATCH ONE"<<endl;
    }
}
    int main()
    {
        cout<<"START"<<endl;
        xhandler(0);
        xhandler(1);
        xhandler(2);
        cout<<"END";
        return 0;
    }
