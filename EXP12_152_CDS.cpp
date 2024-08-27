//Yash Nangia
//152
//ENTC B3
//Constructor inside the function
#include<iostream>
using namespace std;
class student
{
int rollno;
char name[50];
double fee;
public:
student()
{
cout<<"Enter the RollNo:";
cin>> rollno;
cout<<"Enter the Name:";
cin>>name;
cout<<"Enter the Fee:"; 
cin>>fee; 
}
void display()
{
cout<<endl<< rollno <<"\t"<<name<<"\t"<<fee;
}
};
int main()
{
student s; //constructor gets called automatically when we create the Object of the class
s.display();
return 0;
}

//Output
Enter the RollNo:152
Enter the Name:yash
Enter the Fee:120000

152	yash	120000