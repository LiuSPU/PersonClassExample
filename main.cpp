#include <iostream>
# include "Person.h"
using std::cout;
using std::endl;

int main() {

    Person person = "Carlos Arias"; // custom constructor
    Person person2 = "Lin Liu"; // custom constructor
    Person person3 = person;  // copy constructor
    person = person2;   // needs to write a copy assignment

    cout<< person.GetName() << endl;
    cout<< person2.GetName()<<endl;
    cout<< person3.GetName()<<endl;

    return 0;
}
