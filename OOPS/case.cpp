// #include <iostream>
// using namespace std;

// class Student
// { // Class definition
// public:
//     string name;
//     int age;

//     void show()
//     { // Member Function
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|" << endl;

//     }
// };

// int main()
// {
//     Student s1; // Object creation

//     s1.name = "Anmol";
//     s1.age = 19;
//     Student s2;
//     s2.name = "John";
//     s2.age = 21;
//     Student s3;
//     s3.name = "Doe";
//     s3.age = 25;
//     Student s4;
//     s4.name = "Smith";
//     s4.age = 22;

//     s1.show(); // Function call using object

//     s2.show();

//     s3.show();

//     s4.show();
// }
// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//     string name;
//     int speed;

//     void drive()
//     {
//         cout << name << " is driving at " << speed << " km/h" << endl;
//         cout<<"----------------------------------------------------------"<<endl;
//     }
// };

// int main()
// {
//     Car c1, c2; // दो objects

//     c1.name = "BMW";
//     c1.speed = 200;

//     c2.name = "Swift";
//     c2.speed = 120;

//     c1.drive();
//     c2.drive();
// }
// #include <iostream>
// using namespace std;

// class Example
// {
// public:
//     int pub = 1;

// private:
//     int priv = 2;

// protected:
//     int prot = 3;

// public:
//     void insideAccess()
//     {
//         cout << "Public: " << pub << endl;
//         cout << "Private: " << priv << endl;
//         cout << "Protected: " << prot << endl;
//     }
// };

// class Derived : public Example
// {
// public:
//     void show()
//     {
//         cout << "Public from Base: " << pub << endl;
//         // cout << priv; ❌
//         cout << "Protected from Base: " << prot << endl;
//     }
// };

// int main()
// {
//     Example e;
//     cout << "Public from main: " << e.pub << endl;
//     e.insideAccess();

//     Derived d;
//     d.show();
// }

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int age; // private → direct access not allowed

// public:
//     // Setter → value set करने के लिए
//     void setAge(int a)
//     {
//         if (a > 0) // validation (data safe)
//             age = a;
//         else
//             age = 0;
//     }

//     // Getter → value read करने के लिए
//     int getAge()
//     {
//         return age;
//     }
// };

// int main()
// {
//     Student s;

//     // s.age = 18; ❌  error: private member

//     s.setAge(45);                          // ✅ use setter
//     cout << "Student Age: " << s.getAge(); // ✅ use getter
// }
// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     int balance;

// public:
//     void setBalance(int amount)
//     {
//         if (amount >= 0)
//             balance = amount;
//         else
//             balance = 0;
//     }

//     int getBalance()
//     {
//         return balance;
//     }
// };

// int main()
// {
//     BankAccount b;
//     b.setBalance(-500); // invalid input
//     cout<< "Balance: " << b.getBalance() << endl;

//     b.setBalance(2000); // valid input
//     cout << "Balance: " << b.getBalance() << endl;
// }
#include <iostream>
using namespace std;

class Student
{
public:
    // Constructor
    Student()
    {
        cout << "Constructor called!" << endl;
    }
};

int main()
{
    Student s1; // object create हुआ → constructor call
}
