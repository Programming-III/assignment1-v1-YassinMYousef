#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal{
  private:
    string name;
    int age;
    bool isHungry;
    
  public: 
  
    Animal(string n , int a , bool h){
      name = n;
      age = a;
      isHungry = h;
    }
    
    void display(){
      cout << "Name is " << name << "age is " << age << " hunger status" <<  isHungry <<endl;
    }
    
    void feed(){
      if(x.isHungry == true)
      cout << "isnt hungry" << endl;
      
      else 
        cout << "is hungry"<< endl;
      
    }
  
};


#endif
