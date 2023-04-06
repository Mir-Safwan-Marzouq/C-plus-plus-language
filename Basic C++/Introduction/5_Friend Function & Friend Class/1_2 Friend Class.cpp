#include<iostream>
using namespace std;

class rahim
{
    int taka = 100;
    friend class karim; // karim rahim er shob property access korte parbe kintu rahim parbe na
};

class karim
{
    int taka = 200;
public:
    int totalTaka(rahim a)
    {
        return taka + a.taka;
    }
};

int main()
{
    rahim r;
    karim k;
    cout<<k.totalTaka(r)<<endl;
}
