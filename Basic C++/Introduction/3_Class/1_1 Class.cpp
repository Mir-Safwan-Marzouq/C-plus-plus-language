#include<iostream>
using namespace std;


struct abc
{

};
typedef struct abc ABC;
class student
{
    float cgpa;
public:
    char name[100];
    int roll;
    char section;
    float getCGPA()
    {
        if(cgpa<3)
            return cgpa+1;
        return cgpa;
    }
private:

};
int main()
{
    ABC a;
    student b;
    b.getCGPA();
}
