//
// Created by liul5 on 2/15/2024.
//

#ifndef PERSONCLASSEXAMPLE_PERSON_H
#define PERSONCLASSEXAMPLE_PERSON_H


class Person {
public:
    Person();                     // default constructor
    ~Person();                    // destructor
    Person(const char* name);     // custom constructor
    Person(const Person& other); // copy constructor
    Person& operator=(const Person& rhs) ; // copy assignment

    const char* GetName() const;   // getter
    void SetName(const char* name);  // setter

private:
    char* _name;

};


#endif //PERSONCLASSEXAMPLE_PERSON_H
