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
    stud()
    {
        cout<<"Object Creating"<<endl;
        cgpa = 4.00;
        roll = 200;
        section = 'C';
    }
    stud(float c, int r, char s) //eki naamer duita function kintu parameter alada
    {
        cout<<"Constructor with 3 parameters"<<endl;
        cgpa = c;
        roll = r;
        section = s;

    }
};

int main()
{
    stud b,c(3.50,300,'C'); //stud b er name, roll, cgpa set korte chai tokhon constructor use korte pari
    //object declare er shathe shathe constructor er kaaj ta hoye jabe
    cout<<b.getCGPA()<<endl<<b.roll<<endl<<b.section<<endl;
    cout<<c.getCGPA()<<endl<<c.roll<<endl<<c.section<<endl;


}

