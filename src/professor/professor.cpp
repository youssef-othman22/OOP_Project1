#include "professor.h"
#include <iostream>
using namespace std ;
Professor::Professor() {}

void Professor::setID(int id ) {
    this->id = id ;
}

int Professor::getID() {
    return id ;
}

void Professor::setSubjects(std::string subject,int code ) {
    Subject temp ;
    temp.setSubjectName(subject);
    temp.setSubjectCode(code);
    this->profSubjects.push_back(temp);
}

vector<Subject>Professor::getSubjects() {
    return profSubjects;
}

void Professor::printProfSubjects(vector<Subject> v) {
    for(int i=0 ; i<v.size() ; i++) {
        cout<<"subject : "<<v[i].getSubjectName()<<" /  code : "<<v[i].getSubjectCode()<<"\n";
    }
}