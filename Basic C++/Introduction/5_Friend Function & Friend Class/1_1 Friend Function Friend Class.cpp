// Friend Function

#include<iostream>
using namespace std;
class karim;
class rahim
{
    int taka = 100;
    friend int totalTaka(rahim a, karim b);
};

class karim
{
    int taka = 200;
    friend int totalTaka(rahim a, karim b);
};


int totalTaka(rahim a, karim b) // jehutu taka property dui class er ee private ejonno access korte parar kotha na ejonno amra
{                               // oi class e giye likhe dibo ei function ta oi class er friend
    return a.taka+b.taka;
}

int main()
{
 rahim r;
 karim k;
 cout<<totalTaka(r,k)<<endl;
}
