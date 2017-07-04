#include<iostream>
using namespace std;

//Declare student class
class Student {
	public:
		//Overload constructors
		Student(){rollNo=0, name="No name";}
		Student(int n, char *p){rollNo = n, name=p;}
		Student(const Student &src) { //copy constructor
			rollNo = src.GetRollNo();
			name = src.GetName();
			cout<<"\n Copy constructor..."<<endl;
		}
		~Student(){};
		
		//Public access functions
		int GetRollNo() const {return rollNo;}
		void SetRollNo(int n) {rollNo = n;}
		char* GetName() const {return name;}
		void SetName(char *p) {name = p;}

	private:
		int rollNo;
		char *name; //pointer to name		
};

int main () {

	Student std; //object created
	cout<<"\n Students rollno set by default constructor: "<<std.GetRollNo()<<endl;
	cout<<"\n Students name set by default constructor: "<<std.GetName()<<endl;
	//set rollNo to 6060 and name to gautam
	std.SetRollNo(6060);
	std.SetName("Gautam");
	cout<<"\n Students rollNo set by SetRollNo: "<<std.GetRollNo()<<endl;
	cout<<"\n Students name set by SetName: "<<std.GetName()<<endl;
	
	Student std2(7070, "Ramesh");
	cout<<"\n Students rollNo set by (int n, char *p) overloaded constructor: "<<std2.GetRollNo()<<endl;
	cout<<"\n Students name set by (int n, char *p) overloaded constructor:" <<std2.GetName()<<endl;
	
	Student std3(std2);
	cout<<"\n Students (std3 rollNo): "<<std3.GetRollNo()<<endl;
	cout<<"\n Students (stde name): "<<std3.GetName()<<endl;	
}
