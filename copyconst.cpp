#include <iostream>
using namespace std;

class Book
{
	public:
	
	int book_id;
	string book_name;

//	void getdata()
 // {
//	cout<<"Enter the book ID:";
//	cin>>book_id;
//
//	cout<<"Enter the book name:";
//	cin>>book_name;
 // }

	void display()
  {
	cout<<"Book ID is:"<<book_id<<endl;

	cout<<"Name of the book is:"<<book_name<<endl;
  }

	Book(int b_id, string b_n)
  {
	book_id = b_id;

	book_name = b_n;
  }

	Book(Book & b)
  {
	book_id = b.book_id;

	book_name = b.book_name;
  }
};

	int main()
{
	Book b1(123,"xyz");

	Book b2(b1);

//	b1.getdata();
	b1.display();
//	b2.getdata();
	b2.display();

	return 0;
}
