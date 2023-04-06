#include<iostream>
using namespace std;


class nail
{
public:
    int count;
};
class hand
{
public:
    nail n;
};
class head
{

};
class body
{
public:
    hand h;
};

class human
{
public:
    head h;
    body b;
};

int main()
{
  human h;
  head h1;
  body b1;
  cout<<sizeof(h)<<endl<<sizeof(h1)<<endl<<sizeof(b1)<<endl;
  h.b.h.n.count=5;
  // ekta class er bhitor arekta class er property not nested class
}

