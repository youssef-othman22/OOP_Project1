#include <vector>
#include <string>
#include "../person/person.h"


class Subject;

class Student : public Person{
public:
  Student();
  int getID();
  void setID(int id);
  double getGPA();

private:
  int id;
  double GPA;
  std::vector<Subject> subs;
};
