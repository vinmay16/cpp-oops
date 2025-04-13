#include<iostream>
#include<string>
using namespace std;

class Teacher {
    // properties or attributes

    private: // access specifier
        double salary; 
        string name;
        string dept;
        string subject;

    public: 
    // non-paramaterized constructor
        // Teacher(){
        //     dept = "Computer Science";
        //   }  
        
        // parameterized

        


        Teacher (string name,string dept,string subject,double salary){
            cout << "I am custom Copy Constructor...\n";
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        // copy constructor
        Teacher(Teacher &orgObj){//call by reference
            this->name = orgObj.name;
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
            
        }

// methods or member functions
void changeDept(string newDept){
    dept = newDept;

     }   

// setter
void setSalary(double s){
    salary = s;
    }
// getter
double getSalary(){
    return salary;
    }

    void getInfo(){
        cout<< "name : "<< name <<endl;
        cout << "subject :"<< subject <<endl;
     }
};

// class Account {
//     private:
//     string password; // data hiding
//     double balance;

//     public:
//     string accountId;
//     string username;

// };

int main(){
    Teacher t1("Vinmay", "CSE", "C++", 100000); // object creation  & when objected created it automatically call constructor
    // t1.getInfo();

    Teacher t2(t1);  //default copy constructor - invoke
    t2.getInfo();

    // t1.name = "Vinmay";
    // // t1.dept = "Computer Science";
    // t1.subject = "C++";
    // t1.setSalary(50000.0); // set salary using setter method

    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;

    return 0;
}