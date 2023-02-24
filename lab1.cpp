#include<iostream>
using namespace std;
struct student{
    int roll_number;
    string name;
    char grade;
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
}s[3];
int main(){
    int i;
    cout << "Enter student details: \n\n";
    for(i=0;i<3;i++){
        s[i].read();
    }
    cout <<"Entered information is: \n\n";
    for(i=0;i<3;i++){
        s[i].show();
    }
    return 0;
}
