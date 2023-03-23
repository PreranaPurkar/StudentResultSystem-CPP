#include<iostream>
using namespace std;
class Student
{
	private:
		int id;
		char name[20];
	public:
		void setStudent(){
			cout<<"\nEnter the Student ID and Name:";
			cin>>id>>name;
		}
		void getStudent(){
			cout<<"\nId="<<id;
			cout<<"\nName="<<name;
		}
};
int main()
{
	Student s;
	s.setStudent();
	s.getStudent();
	return 0;
}