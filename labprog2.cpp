#include<iostream>
using namespace std;
class student{
    int roll_number;
    string name;
    char grade;
    public:
    void read(){
        cout << "Enter roll number : ";
        cin >> roll_number;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter grade : ";
        cin >> grade;
        cout << endl;
    }
    void show(){
        cout << "Roll number : " << roll_number << endl;
        cout << "Name : " << name << endl;
        cout << "Grade : " << grade << endl;
        cout << endl;
    }
};
int main(){
    student s;
    s.read();
    s.show();
    return 0;
}
