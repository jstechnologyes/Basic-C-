#include<iostream>
using namespace std;

int main()
{
    string firstname="Hadiuzzaman";
    string lastname="Hadi";
    string name= firstname+" "+lastname;
    cout<<name<<endl;

    string fullname=firstname.append(lastname);
    cout<<fullname<<endl;

    string x="10";
    string y="15";
    string z=x+y;
    cout<<z<<endl;

    string text="Banglsesh is our Homeland. It is a Beautiful country";

    cout<<"This lenght is:"<<text.length()<<endl;
    cout<<"This lenght is:"<<text.size()<<endl;
    cout<<text[0]<<endl;
    string f_name, l_name, full_name;
    cout<<"Enter your First name:";
    cin>>f_name;
    cout<<"Enter your Last Name:";
    cin>>l_name;
    full_name=f_name+" "+l_name;
    cout<<"Enter your Full name is "<<full_name;


}
