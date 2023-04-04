#include<iostream>
using namespace std;

struct student
{
    //public / private egula access specifier
    char name[100];
    //float cgpa;
    int roll;
    char section;
    float getCGPA()
    {
        return cgpa;
    }
private:
    float cgpa;
};
// structure jebhabe define korsi class o exactly same way te

class stud
{
    char name[100];
    //float cgpa;
    int roll;
    char section;
    float getCGPA()
    {
        return cgpa;
    }
    //nijer class er bhitor public private shobkichu accessible
private:
    float cgpa;
};

int main()
{
    struct student a; // a naam er ekta student ache jaar moddhe
                      // ei property gula ache
    // structure er khetre variable jokhon declare kortesilam
    // tokhon struct keyword diye start korte hocchilo
    // class er variable declare e kono keyword diye start
    // korte hobe na
    stud b;
    /*
    difference between structure and class
    1. variable declare er shomoy keyword lage structure e
    class e laage na (kind of dedicated datatype create kore
                      fellam)
    2. structure er khetre by default shob property public
    obosthay thake that means shob property accessible obosthay
    thake. kono property hide korte hoile private keyword diye
    hide kori.shei property gula hidden obosthay thakbe
    class er khetre by default shob ee private obosthay ache
    kono kichu jodi amader public korte hoy, tokhon amra public
    keyword use kore likhe dibo
    */
    return 0;
}
