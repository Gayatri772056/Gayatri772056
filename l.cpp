#include <iostream>
using namespace std;
int n, i;
class book {
public:
  int id, isbn, price;
string title, author, publisher;
  book *next;
  book *temp;
  void accept();
  void display();
  void search();
  void update();
  void Deletefirst();
} *start,end1;
void book::accept() {
   
   temp=new book;
  cout << "\nEnter the Book ID : ";
  cin >>temp->id;
  cout << "\nEnter Title of the Book : ";
  cin >>temp->title;
  cout << "\nEnter Author of the Book : ";
  cin >>temp->author;
  cout << "\nEnter Publisher of the Book : ";
  cin >>temp->publisher;
  cout << "\nEnter ISBN NO. of the Book : ";
  cin >>temp->isbn;
  cout << "\nEnter Price of the Book : ";
  cin >>temp->price;
  temp->next=NULL;

if(start==NULL)
start=temp;
else
{
  start->next=temp;
}
}
void book::display() {
int count=0;
temp=start;
if(temp==NULL)
{
  cout<<"\nList is Empty";
 }
 else{
 while(temp!=NULL)
 {
  cout << "\n"
       << temp->id << "\t" << temp->title << "\t" << temp->author << "\t" << temp->publisher << "\t"
       << temp->isbn << "\t" << temp->price;
       temp=temp->next;
       count++;
  }
  }
  cout<<"\n No. of Records are : "<<count;
}
void book::search()
{
   int id,f=0;
   cout<<"Enter the book id which u want to search : ";
   cin>>id;
   temp=start;
   while(temp!=NULL)
   {
    if(id==temp->id)
    {
     f=1;
     cout<<"\nRecord is found";
     cout << "\nID\tTitle\tAuthor\tPublisher\tISBN No.\tPrice";
     cout << "\n"
       << temp->id << "\t" << temp->title << "\t" << temp->author << "\t" << temp->publisher << "\t"
       << temp->isbn << "\t" << temp->price;
     break;
     }
       temp=temp->next;
}
if(f==0)
  cout<<"\n Record Not Found";
}

void book::update()
{
   int id,f=0;
   cout<<"Enter the book id which u want to Update : ";
   cin>>id;
   temp=start;
   while(temp!=NULL)
   {
    if(id==temp->id)
    {
     f=1;
     cout << "\nEnter the Book ID : ";
  cin >>temp->id;
  cout << "\nEnter Title of the Book : ";
  cin >>temp->title;
  cout << "\nEnter Author of the Book : ";
  cin >>temp->author;
  cout << "\nEnter Publisher of the Book : ";
  cin >>temp->publisher;
  cout << "\nEnter ISBN NO. of the Book : ";
  cin >>temp->isbn;
  cout << "\nEnter Price of the Book : ";
  cin >>temp->price;
     break;
    }
    temp=temp->next;
    }
    if(f==0)
  cout<<"\n Book Record Not Found";
}
void book::Deletefirst()
{
    if(start==NULL)
    {
      cout<<"\nList is empty";
      }
      else
      {
      
    temp=start;
    start=temp->next;
    delete temp;
    cout<<"\nFirst Book Record is deleted:";
    }
}     
int main() {
  book b;
  int ch,i;
  
  do {
    cout << "\n\n___________________Library Management "
            "System___________________";
    cout << "\nYour Choices are : ";
    cout << "\n1.Accept\n2.Display\n3.Search\n4.Update\n5.Delete\n6.Exit";
    cout << "\nEnter You choice : ";
    cin >> ch;
    switch (ch) {
    case 1:
      
        b.accept();
      
      
      break;
    case 2:
      cout<<" _______ Books Information __________ "<<endl;
      cout << "\nID\tTitle\tAuthor\tPublisher\tISBN No.\tPrice";
        b.display();
    
      break;
       case 3:
       b.search();
    
      break;
      case 4:
       b.update();
    
      break;
    case 5:
      b.Deletefirst();
      break;
      }

  } while (ch != 0);
  return 0;
}
