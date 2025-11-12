#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
class Mammel : public Animal{
  string furColor;
  
  public Mammel(string n , int a , bool h , string f) : Animal (n , a , h){
    furColor = f;
  }
  
};





#endif
