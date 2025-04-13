#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
       string name;
       int age;

       Person(string name, int age){
        this->name = name;
        this->age = age;
       }
    //    Person(){
    //         cout << "Parent Constructor..\n";
    //    }

};

class Student : public Person {
    public:
        int rollno;

        Student(string name, int age , int rollno) :  Person(name , age) {
            // cout << "Child Constructor...\n";
            this->rollno = rollno;
        }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main(){
    Student s1("Vinmay", 20 , 21);
    // s1.name = "Vinmay";
    // s1.age = 20;
    // s1.rollno = 21;

    s1.getInfo();
    return 0;
}
