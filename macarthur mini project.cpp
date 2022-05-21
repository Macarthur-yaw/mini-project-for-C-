#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>


using namespace std;
void info();//function declaration


//Structure defining

//For students
struct student
{
 string fname;//for student first name
 string lname;//for student last name
 
 string classes;//for class info
}studentData;//Variable of student type

//For teachers



int main()//using the main function
{

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;//for name

while(1)//outer loop
{ 
 system("cls");//Clear screen

 info();//caling out the function
 
 cin>>choice;

system("cls");//Clear screen


switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display entry\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);//appending text to file 

for( i=0;choice!='n';i++)//using for loop
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 
 //displaying what the user should type 
 cin>>studentData.fname;//getting user input
 cout<<"Enter Last name: ";//displaying what the user should type
 cin>>studentData.lname;//getting user input
 
 cout<<"Enter class: ";//dsiaplaying what the user should type
 cin>>studentData.classes;//allowing for user input
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.classes<<endl;//storing text to files
 cout<<"Do you want to enter data: ";//displaying question
 cout<<"Press Y for Continue and N to Finish:  ";
 cin>>choice;//allowing for user input
}
} 
f1.close();//closing file
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); //opening of a file

cout<<"Enter First name to be displayed: ";//displaying what the user should type
cin>>find;//allowing for user input
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)//using for loop
{ 

getline(f2,studentData.fname);//get data from the file

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.fname<<endl;//displaying what the user should type
 cout<<"Last Name: "<<studentData.lname<<endl;


 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking

}
  
}}}}
void info(){
	cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";//displaying 
 cout<<"\n\n\t\t\tSTUDENT's MANAGEMENT PROGRAM\n\n";
 cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
 cout<<"Enter your choice: "<<endl;//allowing for user input
 cout<<"1.Students information"<<endl;//
}

