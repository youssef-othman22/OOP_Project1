#include <string>
#pragma once

using namespace std;


class Subject {
public:
  Subject();
  Subject(int code, std::string name);
  int getSubjectCode() ;
  std::string getSubjectName();
  void setSubjectCode(int code) ;
  void setSubjectName(string name) ;
  void setGrade (double grade );
  double getGrade ();

private:
  int code;
  string name;
  double grade ;
};

