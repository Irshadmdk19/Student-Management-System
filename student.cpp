#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
using namespace std;

void project();
void addData();
void displayData();
void deleteData();
void getTrash();


class Student
{
    int admissionNo;
    char sname[30];
    char sgender;
    int std;
    float marks;
    double spercentage;

    public:

    void getData();
    void showData();
    int getAdmno();
    {
        return admissionNo;

    }
}s;

int main()
{
  

 project();

    return 0;
}

void project()
{
    int ch;

    do
    {
        system("cls");
       cout<<"***********STUDENT MANAGEMENT SYSTEM********"<<endl;

       cout<<"1.Write Student Record\n";

       cout<<"2.Read Student Record\n";

       cout<<"3.Delete Student Record\n";

       cout<<"4.Get Deleted Records\n";

       cout<<"0.Exit\n";

       cout<<"Enter your choice:";
       cin>>ch;

       system("cls");

          switch(ch)
         {case 1: addData();
         break;
         case 2: displayData();
         break;
         case 3: deleteData();
         break;
         case 4: getTrash();
         break;
         }
        


        
    } while (/* cond;
    ition */);
    
}

 

