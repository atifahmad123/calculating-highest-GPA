  #include<iostream>
  using namespace std;
 
 class Student {
 	private:
 		string name;
 		double GPA;
 		
 	//Friend Function Decleration	
 	friend void compareGPA(const Student& obj1, const Student& obj2);
 	
	public:
 		Student(){
 			name = "ABC";
 			GPA = 1.1;
		 }		
 
 	void setName(){
 		getline(cin, name);	
	 }
	void setGPA(){
		cin>>GPA;
	}
 
 };

//Friend Function Definition 
void compareGPA(const Student& obj1, const Student& obj2){
	 if (obj1.GPA > obj2.GPA){
		cout<<"\t"<<obj1.name<<" has higher GPA: "<<obj1.GPA;
	} 	
else if (obj1.GPA < obj2.GPA){
		cout<<"\t"<<obj2.name<<" has higher GPA: "<<obj2.GPA;
	} 	
	else{
		cout<<"\t"<<"Both Students have same GPA.";
	}
}
  
  int main(){
  	//Student objects deceleration in Main
	Student std1, std2;
  	
  	//user feeding data regarding student 1
  	cout<<"\n\tKindly enter 1st student name."<<endl;
	std1.setName();
	cout<<"\tKindly enter 1st student GPA."<<endl;
  	std1.setGPA();
  	//ignoring newLine character
  	cin.ignore();
  	
  	//user feeding data regarding student 2.
	cout<<"\tKindly enter 2nd student name."<<endl;
  	std2.setName();
  	cout<<"\tKindly enter 2nd student GPA."<<endl;
	std2.setGPA();
  
  	compareGPA(std1, std2);	
  	
  	return 0;
  }                  
  
  
                                                                             