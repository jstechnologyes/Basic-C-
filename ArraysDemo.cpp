#include<iostream>
using namespace std;

int main()
{
    string cars[4]={"volvo","BMW","Ford","Mazda"};
    for(int i=0;i<4;i++)
    {
        cout<<i+1<<"."<<cars[i]<<endl;
    }
    cout<<cars[0]<<" "<<cars[1];
}
