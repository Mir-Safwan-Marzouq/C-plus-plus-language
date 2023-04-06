#include<iostream>
using namespace std;
class karim
{
    int taka = 200;
    friend class rahim;

};
class rahim
{
    int taka = 100;
public:
    int totalTaka(karim a)
    {
        return taka + a.taka;
    } // karim rahim er shob property access korte parbe kintu rahim parbe na
};



int main()
{
    rahim r;
    karim k;
    cout<<r.totalTaka(k)<<endl;
}

