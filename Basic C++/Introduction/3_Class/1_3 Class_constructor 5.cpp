#include<iostream>
using namespace std;

class stud
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
        else
            return cgpa;
    }
    //constructor hocche ekta public function je function taar naam class er naam e hobe ebong jetar kono return type thakbe na
    stud(int a) //eki naamer duita function kintu parameter alada
    {
        cout<<"Hello There"<<endl;
        roll = a;

    }
    stud(float f) //eki naamer duita function kintu parameter alada
    {
       cgpa = f;

    }
};

int main()
{
    stud b=100;
}



