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
    stud(float c, int r) //eki naamer duita function kintu parameter alada
    {
        cout<<"Constructor with 2 parameters float first"<<endl;

    }
    stud(int r, float c) //eki naamer duita function kintu parameter alada
    {
        cout<<"Constructor with 2 parameters int first"<<endl;

    }
};

int main()
{
    stud b(3.50,100),c(300,3.54); //stud b er name, roll, cgpa set korte chai tokhon constructor use korte pari
    //object declare er shathe shathe constructor er kaaj ta hoye jabe
}


