#include<iostream>
using namespace std;
int main()
{
    ///Simple Variabls
    string food="Pizza";
    //Pointers
    string *ptr=&food;
    cout<<food<<endl;
    cout<<*ptr<<endl;
    /* Pointrs value modyfu */
    *ptr="Humbrug";
    cout<<*ptr<<endl;
    cout<<food<<endl;




}
