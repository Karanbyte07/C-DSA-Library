#include <iostream>
using namespace std;

//create a class with a constructor
class student {
    public:
    //default constructor
    student( ){
        cout << "Default constructor called" << endl;
    }
    string name;
    int marks;
    int age;

    //parameterized constructor
    student(string n){
        this->name = n;
        cout << "Parameterized constructor called with name: " << n << endl;
    }

    //destructor
    ~student(){
        cout << "Destructor called for student " << endl;
    }
};


int main() {
    //create an object statically 
    student s1; // Default constructor will be called here 1- destructor will be called when s1 goes out of scope
    student s2("John"); // Parameterized constructor will be called here 2 - destructor will be called when s2 goes out of scope

    //dynamically create an object
    student* s3 = new student("Alice"); 
    // Destructor will be called when s3 is deleted
    delete s3; // Explicitly calling destructor for dynamic object


    
    
}