#include<iostream>
#include<string>
using namespace std;
int main()
{
    int password,defaultpassword;
    cout<<"please enter defultpassword:";
    cin>>defaultpassword;
    do{
        cout<<"Enter password:";
        cin>>password;
    }
    while(password!=defaultpassword);
    cout<<"login seccessed";
    return 0;
}