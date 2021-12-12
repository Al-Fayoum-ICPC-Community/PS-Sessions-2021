#include<iostream>

using namespace std;

int main() 
{
    const string correct = "2021";
    string number;

    cin>>number;

    while(number != correct)
    {
        cout<<"Wrong"<<endl;
        cin>>number;
    }

    cout<<"Correct"<<endl;

    return 0;
}