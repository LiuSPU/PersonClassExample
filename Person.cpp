//
// Created by liul5 on 2/15/2024.
//

#include "Person.h"
#include <cstring>

Person::Person() {
_name = nullptr;
}

Person::Person(const char *name) {
    _name = new char[strlen(name)+1];
    strcpy(_name, name);

}

Person::~Person() {
 delete[] _name;
}

const char *Person::GetName() const {
    return _name;
}

void Person::SetName(const char *name) {
if(_name != nullptr){
    delete[] _name;
}
    _name= new char[strlen(name)+1];
    strcpy(_name, name);
}

Person::Person(const Person &other) {
    _name = new char[strlen(other._name)+1];
    strcpy(_name, other._name);


}

Person &Person::operator=(const Person &rhs)  {

    if (this != &rhs) {
        delete[] _name;
    }
    _name = new char[strlen(rhs._name) + 1];
    strcpy(_name, rhs._name);

    return *this;

}


