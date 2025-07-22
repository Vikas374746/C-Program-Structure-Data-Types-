//Vikas J 
// 24070123166
// B-3

#include <iostream>
using namespace std;
int main() {
    int english,maths,science;
    cout << "Enter marks of english:";
    cin >> english;
    cout << "Enter marks of maths:";
    cin >> maths;
    cout << "Enter marks of science:";
    cin >> science;
    int avg = (english + maths + science)/3;
    cout << "The grade of this student is: ";
    if(avg>90){
        cout << "A+";
    }
    else if(avg>=80){
        cout << "A";
    }
    else if(avg>=70){
        cout << "B";
    }
    else if(avg>=60){
        cout << "C";
    }
    else if(avg>=50){
        cout << "D";
    }
    else{
        cout << "The student has failed";
    }
    return 0;
}
