#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"\nEnter the Student ID and Name:";
			cin>>id>>name;
		}
};
class Result:public Student
{
	private:
		float per;
	public:
		void setResult(){
			cout<<"Enter the Percentage:";
			cin>>per;
		}
		void showResult()
		{
			cout<<"\nId="<<id;
			cout<<"\nName="<<name;
			cout<<"\nPercentage="<<per;
		}
};
int main()
{
	Result r;
	r.setStudent();
	//s.getStudent();
	r.setResult();
	r.showResult();
	return 0;
}