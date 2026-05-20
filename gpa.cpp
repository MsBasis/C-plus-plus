#include <iostream>
using namespace std;


struct Course {
    string name;
    int grade;
};

void create_syllabus(){

    Course nanos, sth;

    nanos.name = "asd";
    nanos.grade = 67;
    sth.name = "aaaaaaa";
    sth.grade = 2137;

    cout << nanos.grade <<"\n";
    cout <<sth.grade;
}




int main(){
    create_syllabus();
    return 0;
}





