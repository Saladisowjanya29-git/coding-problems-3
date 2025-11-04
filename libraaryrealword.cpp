#include<bits/stdc++.h>
using namespace std;
class book
{
	public:
		int id;
		string title;
		string author;
		int avaliblecopies;
		book(int id,string title,string author,int avaliblecopies)
		{
			this->id=id;
			this->title=title;
			this->author=author;
			this->avaliblecopies=avaliblecopies;
		}
		void display()
		{
			//is is used to print the information of  the book
			cout<<"id: "<<id<<endl;
			cout<<"title: "<<title<<endl;
			cout<<" author:"<<author<<endl;
			cout<<"avaliblecopies: "<<avaliblecopies<<endl;
		}
};
class member
{
	public:
		int id;
		string name;
		string phonenumber;
				vector<int>infobook;
				member(int id, string name,int phonenumber)
				{
					this->id=id;
					this->name=name;
					this->phonenumber=phonenumber;
				}
				void borrowbook(int bookid)
				{
					infobook.push_back(bookid);
				}
				void returnbook(int bookid)
				{
					infobook.erase(infobook.begin(),infobook.end(),bookid);
					
				}
};
class library
{
public:
vector<book>books;
vector<member>members;
	void addbook(book b)
	{
		books.push_back(b);
	}
	void addmember(member m)
	{
		members.push_back(m);
	}
	void borrowbook(int memberid,int bookid)
	{
		for(auto &b: books)
		{
			bool f=0;
			if(b.id==booksid && b.avaliblecopies >0)
			{
				for(auto &m :members)
				{
					if(m.id==memberid)
					{
						m.borrowbook(b);
						b.avaliblecopies--;
						f=1;
						cout<<m.name<<" borrowed"<<b.title<<endl;
						//return ;
					}
				}
			}
		}
		if(f==0)
		cout<<"book is not avalible"<<endl;
	}
	void returnbook(int memberid,bookid)
	{
		for(auto &b :books)
		{
			if(b.id==bookid)
			{
				for(auto &m: members)
				{
					if(m.id==memberid)
					{
						m.returnbook(bookid);
						b.avaliblecopies++;
						cout<<m.name<<" returned"<<b.title<<endl;
						return ;
					}
				}
			}
		}
		cout<<"invalid"<<endl;
	}
};
int main()
{
	library lib;
	book b1(1,"c++","ashok",3);
	lib.addbook(b1);
	member m1(2,"don",91234568);
}
