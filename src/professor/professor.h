
#include "../subject/subject.h"
#include <vector>
#include <string>
#pragma once

using namespace std ;
class Professor {
public:
  Professor();
  void setID(int id );
  int getID();
void setSubjects(std::string subject,int code );
  void printProfSubjects(vector<Subject> v);
  vector<Subject> getSubjects();

  private :
  int id ;
  vector<Subject> profSubjects ;
};

