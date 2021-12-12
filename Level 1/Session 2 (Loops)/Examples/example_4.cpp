#include<iostream>

using namespace std;

int main() 
{
    int N, M;
    
    cin>>N;

    M=N;

    for(int i=1 ; i<=N ; i++)
    {
        for(int j=1 ; j<=M-1 ; j++)
            cout<<" ";

        for (int j=1 ; j<=2*i-1 ; j++)
            cout<<"*";
        
        M--;

        cout<<"\n";
    }

    return 0;
}