#include<iostream>
using namespace std;
int main ()
 {
   
    char str[50];
    int length=0;
    int i;
    cout<<"input you name"<<endl;
    cin.get(str,20);
    cout<<str<<endl;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    cout<<length;
 }