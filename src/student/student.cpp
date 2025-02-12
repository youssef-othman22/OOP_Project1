#include "student.h"
#include <vector>
using namespace std;
#include "../person/person.h"
#include "../subject/Subject.h"
#include <iostream>

Student::Student() {
   this->id = 0 ;
    this->GPA = 0.0 ;
   this->subs =  std::vector<Subject>(6);

}

void Student::setID(int id) {
    this->id = id ;
}
int Student::getID() {
 return id ;
}
void Student::setGPA() {
    double g ;
    for(int i=0 ; i<6 ; i++) {
         cout<<"Enter grade of subject num "<<i+1<<endl;
        cin >> g ;
         subs[i].setGrade(g);
    }
}
double Student::getGPA() {
    double sumGrades = 0 ;
for(int i=0 ; i<6 ; i++) {
    sumGrades += subs[i].getGrade()*3;
}
return sumGrades/18;
}


