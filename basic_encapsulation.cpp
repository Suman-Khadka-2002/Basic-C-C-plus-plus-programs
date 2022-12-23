#include <iostream>

using namespace std;

// Define the class "Person"
class Person {
  private:
    string name;
    int age;

  public:
    void setName(string n) {
      name = n;
    }
    void setAge(int a) {
      if (a > 0) {
        age = a;
      }
    }
    string getName() {
      return name;
    }
    int getAge() {
      return age;
    }
};

int main() {
  // Create an object of the Person class
  Person person;

  // Set the name and age of the person
  person.setName("John");
  person.setAge(30);

  // Print the name and age of the person
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;

  return 0;
}
