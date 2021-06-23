#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void addphone (void);
void searchphone(void);
int main ()
{
    cout<<"Hello and welcome to phone book ...\n";
    cout<<"1).add phone number\n2).search phone number\n3).Exit\n";
    int x;
    string f="you input wrong number !!!.\n";
    cin>>x;
    try
    {
        if (x>4 && x<1)
        {
            throw f;
        }

    }catch (string a){cout<<a<<endl;}
    switch(x)
    {
    case 1:
        addphone();
        break;
    case 2:
        searchphone();
        break;
    case 3:
        return 0;
        break;
    }
}

void addphone (void)
{
 ofstream phone ("phone.txt");
 if(!phone)
 {cout<<"the file can not be created !!!\n---------------------------------\n";}
 else
 {cout<<"the file seccussfully created\n-----------------------------------\n";}
 long long int number;
 string name;
 int num;
 cout<<"Hello and welcome to your note : please input the number of phone number do want to add ?:";
 cin>>num;
 for (int i=1;i<=num;i++)
 {
     cout<<"please enter phone number :\n";
     cin>>number;
     cout<<"please enter the name of phone number:\n";
     cin>>name;
     phone<<number<<" : "<<name<<endl;
 }
  main();
}
void searchphone(void)
{
    ifstream phone ("phone.txt");
    if(!phone){cout<<"file can not open.\n";}
    else {cout<<"file seccussfully open .\n-----------------------------\n";}
    long long int number;
    string name,name_search;
    bool y=false;
    cout<<"enter a name to finding its phone number ?.\n";
    cin>>name_search;
    while (phone >> name )
    {
        phone >> number;
        if(name==name_search)
        {
         cout<<name<<':'<<number<<endl;
         y=true;
        }
     else {y=false;cout<<"this name is not exit !!!.\n";}
    }
    main();
    }
