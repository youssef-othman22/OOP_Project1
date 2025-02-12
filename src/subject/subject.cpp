#include "subject.h"
Subject::Subject( ) {

}
Subject::Subject(int code, string name) {
    code = 0 ;
    name = "";
}

int Subject:: getSubjectCode() {
    return code ;
}

std::string Subject:: getSubjectName()  {
    return name ;
}

void Subject::setSubjectCode(int code) {
    this->code = code ;
}

void Subject::setSubjectName(string name) {
    this->name = name ;
}

void Subject::setGrade (double grade ) {
    this->grade = grade ;
}

double Subject::getGrade() {
    return grade ;
}
