#include<iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;
    
    Student(string name,double cgpa){
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Student(Student &obj){
    //     this->name = obj.name;
    //     cgpaPtr = new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    // }

    // destructor
    ~Student(){
        cout << "Delete Everything \n";
        delete cgpaPtr;
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("vinmay kumar", 8.8);
    // Student s2(s1)
    // s2.getInfo();

    s1.getInfo();
    // *(s2.cgpaPtr) = 9.2;
    // s1.getInfo();

    // s2.name = "harsh";
    // s2.getInfo();
    return 0;
}