#include <iostream>
using namespace std;
float total(string name, int sub1, int sub2, int sub3, int sub4, int sub5, float result, string grade, float percent, float mark);

main(){
    string name;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    float result;
    string grade;
    float percent;
    float mark;
    cout << "Enter ur name: " ;
    cin >> name;
    cout << "Enter sub1: " ;
    cin >> sub1;
     cout << "Enter sub2: " ;
     cin >> sub2;
     cout << "Enter sub3: " ;
     cin >> sub3;
     cout << "Enter sub4: " ;
     cin >> sub4;
     cout << "Enter sub5: " ;
     cin >> sub5;
     mark = ( sub1 + sub2+ sub3 + sub4 + sub5 );
     percent = ( marks / 500 ) * 100 ;
     result=total(name, sub1, sub2, sub3, sub4, sub5, result, grade, percent, mark);

}
float total(string name, int sub1, int sub2, int sub3, int sub4, int sub5, float result, string grade, float percent, float mark){
    if(percent >= 90){
    cout << "Your grade is A+ " << grade ;
cout << "Your name is" << name ;
cout << "Your marks are " << mark ;
cout << "Your percentage is" << percent ;
    }
     if(percent >= 80 && percent < 90){
    cout << "Your grade is A " << grade ;
cout << "Your name is" << name ;
cout << "Your marks are " << mark ;
cout << "Your percentage is" << percent ;
    }
    if(percent >= 70 && percent < 80){
    cout << "Your grade is B+ " << grade ;
cout << "Your name is" << name ;
cout << "Your marks are " << mark ;
cout << "Your percentage is" << percent ;
    }
   if(percent >= 60 && percent < 70){
    cout << "Your grade is B " << grade ;
cout << "Your name is" << name ;
cout << "Your marks are " << mark ;
cout << "Your percentage is" << percent ;
    }
    if(percent >= 50 && percent < 60){
    cout << "Your grade is C " << grade ;
cout << "Your name is" << name ;
cout << "Your marks are " << mark ;
cout << "Your percentage is" << percent ;
    cout << total;
    return result;
}
}