#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream a;
    a.open("file_details.txt", ios::out|ios::app);
    for(int i=1; i<=3; i++){
        string name;
        int age;
        cout<<"Enter Name: ";
        getline(cin,name);
        a<<"Name: "<<name<<", ";
        cout<<"Enter Age: ";
        cin>>age;
        a<<"Age: "<<age<<endl;
        cin.ignore();
    }
    a.close();
}
