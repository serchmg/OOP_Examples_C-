#include <iostream>

using namespace std;

class Student {
	public:
		Student(){rollNo=50,name="Anand";}
		~Student(){};
		int GetRollNo() const{return rollNo;}
		void SetRollNo(int n){rollNo=n;}
		char* GetName() const{return name;}
		void SetName (char* p){name = p;}
	private:
		int rollNo;
		char* name;
};

int main() {
	//Student std;
	Student* ptr = new Student; //Object on free store created
	
	cout<<"\n Students rollNo set by default constructor: "<<ptr->GetRollNo()<<endl;
	cout<<"\n Students name set by default constructor: "<<ptr->GetName()<<endl;

	ptr->SetRollNo(6060);
	ptr->SetName("Gautam");

	cout<<"\n Students rollNo set by SetRollNo: "<<ptr->GetRollNo()<<endl;
	cout<<"\n Students rollNo set by SetName: "<<ptr->GetName()<<endl;	

	//cout<<"\n Students rollNo set by SetRollNo: "<<std.GetRollNo()<<endl;
	//cout<<"\n Students rollNo set by SetName: "<<std.GetName()<<endl;	

	delete ptr;
	
	return 0;
}
