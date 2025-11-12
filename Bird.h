#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
class Bird : public Animal {
  string wingSpan;
  
  public Bird(string n , int a , bool h , string w) : Animal (n , a , h){
    wingSpan = w;
  }
};






#endif
