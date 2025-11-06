#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a) { age = (a > 0) ? a : 0; }
    int getAge() 
    { 
        return age;
     }
};

int main()
{
    Student s;
    s.setAge(18);
    cout << "Age: " << s.getAge();
}
