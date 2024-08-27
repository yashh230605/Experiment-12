#include<iostream>
using namespace std;
//Constructor outside the class
class student
{
int rno;
char name[50];
double fee;
public:
student();
void display(); };
student::student()
{
cout<<"Enter the RollNo:";
cin>>rno;
cout<<"Enter the Name:";
cin>>name;
cout<<"Enter the Fee:";
cin>>fee;
}
void student::display()
{
cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
student s;
s.display();
return 0;
}

//Output
Enter the RollNo:152
Enter the Name:yash
Enter the Fee:120000

152	yash	120000