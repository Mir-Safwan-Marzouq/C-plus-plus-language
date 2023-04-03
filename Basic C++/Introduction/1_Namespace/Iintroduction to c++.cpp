#include<iostream> //its not header file, it is library file or library header.
//inside that there can be header included; #include<stdio.h> ; this is header file
using namespace std; // we are using a namespace that is named 'std'

// declaring 2 namespace
// code inside namespace can be used anytime
// if we create 2 function of same name and we want to separately keep  them, we need to use namespace

//std namespace er bhitore cout , cin erokon bibhinno function okhane define kora ache
//ekekta header er shathe ekekta function ebhabe define kora ache std namespace er bhitore
// std namespace er moddhe erokom onek by default c++ er code kore dewa ache ei code gula amra regular c++ code e use korte chai
namespace a
{
    int sum(int a, int b)
    {
        return a+b;
    }
}

namespace b
{
    float sum(int a, int b)
    {
        return a+b+0.001;
    }
}
using namespace b; // a namespace er sum function use korte chai
int main()
{
    cout<<sum(5,6)<<endl;
    cout<<"Hello World"<<endl;
    return 0;
}
