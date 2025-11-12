#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 


class Enclosure{
  private:
    Animal* Animal;
    int capacity;
    int currentCount;

  public:
  
    Enclosure(Animal* a, int c , int cc){
      Animal = a;
      int capacity = c;
      int currentCount = cc;
     
    }
    
    void addAnimal(Animal* a){
      
    }
    
    
    void displayAnimals(){
      
    }
};






#endif
