#include "student.h"
#include <vector>

#include "../person/person.h"
#include "../subject/Subject.h"


Student::Student() {
   this->id = 0 ;
    this->GPA = 0.0 ;
    std::vector<Subject> subs(6);

}

void Student::setID(int id) {
    this->id = id ;
}
int Student::getID() {
 return id ;
}

double Student::getGPA() {
    double sumGrades = 0 ;
for(int i=0 ; i<6 ; i++) {
    sumGrades += subs[i].getGrade()*3 ;
}
return sumGrades/18;
}


