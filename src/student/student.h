#include "./depend/dep.cpp"
#include "./subject/subject.h"

class Student {
public:
  Student() {}
  int getID() {}
  void setID(double id) {}
  double getGPA() {}
  void setAge(int age) {}
private:
  int age;
  double GPA;
  vector<Subject> subs; 
};