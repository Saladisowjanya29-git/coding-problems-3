//inheritance single 
 #include<bits/stdc++.h>
 using namespace std;
 class parent
 {
 	public:
 	string name;
 	int age;
 	parent(string name,int age)
 	{
 		cout<<"parent count"<<endl;
 		this->name=name;
 		this->age=age;
	 }
 };
 class child : public parent
 {
 	public:
    int rollno;	
    child(string name, int age, int rollno) : parent(name,age)
    {
    	cout<<"child"<<endl;
    	this->rollno;
	}
 };
 int main()
 {
 	child c1("raj",56,123);
 	cout<<c1.name<<endl;
 }
 
