#include "Course.h"
#include "Transcript.h"
#include <iostream>
#include <set>

using namespace std;

/**
 * Ridiculous code to play with operator overloading.
 *
 * @author zjb
 */
int main() {

  // Make an empty transcript for Bob
  Transcript t1("Bob");
  // Each course has a name and a grade (0-4) assigned
  Course c1("Writing",2);
  Course c2("Calculus I",4);
  Course c3("CS1",3);
  Course c4("Tennis",4);

  // Put the courses on the transcript
  t1 += c1;
  t1 += c2;
  t1 += c3;
  t1 += c4;

  cout << "Bob's GPA is " << t1.gpa() << endl;

  // Make a copy of that transcript with another course added to it.
  // Note that t1 should not be changed by this operation.
  Transcript t2 = t1 + Course("Psychology",4);
  t2.setName("Copy of Bob");

  t1 -= c1; // Erased from the permament record!
  // If the course was not there to be removed, nothing happens.

  // Here are all of our students
  // They will be stored in increasing order by GPA.
  set<Transcript> students;
  students.insert(t1);
  students.insert(t2);

  // One more student, just one course for him
  Transcript t3("John");
  t3 += Course("Biology",2);
  students.insert(t3);
  // But also, let's combine two transcripts
  // The result will contain all courses in both original transcripts
  // The resulting name will (in this case) be "Bob and John" :)
  students.insert(t1+t3);


  cout << "--------Our students:----------" << endl << endl;


  for (set<Transcript>::iterator sit = students.begin();
       sit != students.end(); sit++) {
    cout << sit->getName() << ":" << endl;
    //cout<<sit->name;


    for (int c = 0; c < sit->numCourses(); c++) {
      cout << "\t" << (*sit)[c].getName() << ": " << (*sit)[c].getGrade() << endl;
    }
    cout << "GPA: " << sit->gpa() << endl << endl;
  }

}
