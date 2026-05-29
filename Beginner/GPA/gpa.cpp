// 1. CGPA Calculator
// A student's cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator. The user's input is used to compute the CGPA, which includes information like the number of courses taken and the grades earned in each one. The program also shows each student's overall course grade. CGPA Calculator calculates a student’s Cumulative Grade Point Average (CGPA) from the given exam results. The program can show the individual grades of each course, calculate total credits and total grade points achieved, determine the GPA for the semester, and based on all the data, it can generate and present the CGPA of the student. 

// Technologies Required: C++ programming language, Data Structures, Basic Searching & Sorting algorithms, Basic Arithmetic Operations and formulas, and File Handling ( I/O Streams ).


#include <iostream>
#include <array>
#include <vector>
#include <format>
using namespace std;

struct Course {
    string name;
    int quant;
    vector<float> grades;
    float gpa;
};



// user inputs courses and grades
vector<Course> create_syllabus(int course_number){
    vector<Course> courses(course_number); //arrays can be a made up type by me
    for (int i = 0; i< course_number; i++){
        string course_name;
        int grades_number;
        vector<float> grades;
        float gpa = 0;

        cout << "Type a course name: ";
        cin >> course_name;

        cout << "Type a number of grades in a course: ";
        cin >> grades_number;
        
        
        courses[i].name = course_name;
        courses[i].quant = grades_number;

        for (int j=0; j < grades_number; j++){
            float grade;
            string text = format("Input {} grade: \n", j+1);
            cout << text;
            cin >> grade;
            gpa = gpa + grade;
            grades.push_back(grade);
        }
        courses[i].grades = grades;
        gpa = gpa / grades_number;
        courses[i].gpa = gpa;
        
    }
    return courses;
}

void show_gpa(vector<Course> syllabus){
    int choose;
    for (int i=0; i < syllabus.size();i++){
        string text = format("[{}] {}\n",i,syllabus.at(i).name);
        cout << text;
    }
    cout << "Choose number to display courses gpa: ";
    cin >> choose;
    string name = syllabus.at(choose).name;
    float gpa = syllabus.at(choose).gpa;
    string text_gpa = format("{} gpa: {}\n", name, gpa);
    cout << text_gpa;
}

void show_cgpa(vector<Course> syllabus){
    float cgpa = 0.0;
    for (int i=0; i < syllabus.size(); i++){
        cgpa = cgpa + syllabus.at(i).gpa;
    }
    cgpa = cgpa / syllabus.size();
    string text = format("CGPA: {}\n", cgpa);
    cout << text;
}

void show_grades(vector<Course> syllabus){
    int choose;
    for (int i=0; i < syllabus.size(); i++){
        string text = format("[{}] {}\n",i, syllabus.at(i).name);
        cout << text;
    }
    cout << "Choose a number to display courses grades: ";
    cin >> choose;
    for (int i=0; i < syllabus.at(choose).grades.size(); i++){
        string text_grades = format("[{}] {}\n",i, syllabus.at(choose).grades.at(i));
        cout << text_grades;
    }

}

void loop_gpa(vector<Course> syllabus){
    bool condition = true;
    while (condition) {
        int choose;
        cout << "- - - - - - - - - - - - - - - - - - -" << endl;
        cout << "[0] Show whole syllabus" << endl;
        cout << "[1] Show GPA of chosen course" << endl;
        cout << "[2] Show grades of chosen course" << endl;
        cout << "[3] Show CGPA" << endl;
        cout << "[4] End program" << endl;
        cout << "Choose a number of what u wanna do: ";
        cin >> choose;
        cout << "- - - - - - - - - - - - - - - - - - -" << endl;
        switch (choose) {
            case 0:
                for (int i=0; i < syllabus.size(); i++){
                    string text = format("[{}] {}\n",i, syllabus.at(i).name);
                    cout << text;
                }
                break;
            case 1:
                show_gpa(syllabus);
                break;
            case 2:
                show_grades(syllabus);
                break;
            case 3:
                show_cgpa(syllabus);
                break;
            case 4:
                condition = false;
                break;
        }

    }


}





int main(){
    int course_number;
    cout << "Type a number of your courses: ";
    cin >> course_number;
    vector<Course> syllabus = create_syllabus(course_number);
    
    loop_gpa(syllabus);

    return 0;
}










