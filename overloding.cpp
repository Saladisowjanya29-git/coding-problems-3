#include<bits/stdc++.h>
using namespace std;
class marks
{
	public:
		int inter;
		int exter;
		
		marks()
		{
			int inter=0;
			int exter=0;
		};
		marks(int inte,int exte)
		{
			inter=inte;
			exter=exte;
		};
		marks operator + (marks m)
		{
			marks temp;
			temp.inter=inter+m.inter;
			temp.exter=exter+m.exter;
			return temp;
		}
		void display()
		{
			cout<<"inter"<<inter<<endl;
			cout<<"exter"<<exter<<endl;
		}
};
int main()
{
	marks m1(20,24),m2(30,19);
	marks m3=m1+m2;
	m3.display();
		}
