#include<iostream>
using namespace std;

class human
{

public: // class er bhitor class ;
    class asian
    {
        // jodi private class hoy taile access korte parbo na ejonno public korte hobe
    public:
        class bangladeshi
        {

        };
    public:
        int id;

    };
    int x()
    {
        asian::bangladeshi a;
    }
};

int main()
{
    // asian a; will give error ; need to use scope resolution operator
    human::asian a;
    human::asian::bangladeshi b;
    cin>>a.id;
    cout<<a.id<<endl;
}
