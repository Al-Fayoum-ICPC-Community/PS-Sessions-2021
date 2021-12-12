#include<iostream>

using namespace std;

int main() 
{
    int X, Y, sum = 0;

    cin>>X>>Y;

    for(int i=X ; i<=Y ; i++)
    {
        sum += i;
    }

    cout<<sum<<endl;

    return 0;
}