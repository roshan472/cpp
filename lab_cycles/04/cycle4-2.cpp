#include<iostream>
using namespace std;
class second;
class first
{
int x;
public:
void getx()
{
cout<<"\nEnter the value of first number:";
cin>>x;
}
friend void max(first,second);
};
class second
{
int y;
public:
void gety()
{
cout<<"\nEnter the value of second number:";
cin>>y;
}
friend void max(first,second);
};
void max(first a,second b)
{
if(a.x>b.y)
{
cout<<"\nGreater value is:"<<a.x;
}
else
{
cout<<"\nGreater value is:"<<b.y;
}
}
int main()
{
first a;
second b;
a.getx();
b.gety();
max(a,b);
return 0;
}