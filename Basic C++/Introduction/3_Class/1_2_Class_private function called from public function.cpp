#include<iostream>
using namespace std;

//private function calling from the public function
class student
{
    float cgpa;
    void print()
    {
        printf("Hello There");
    }
public:
    char name[100];
    int roll;
    char section;
    void printT()
    {
        print();
    }

private:

};
int main()
{
    student b;
    b.printT();
}
