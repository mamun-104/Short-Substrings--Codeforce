#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string b,a;
        cin>>b;
        int i;
        a=b[0];
        for(i=1;i<b.length()-1;i=i+2){
            a=a+b[i];
        }
        a=a+b[b.length()-1];
        cout<<a<<"\n";
    }



    return 0;
}
