#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : public Animal{
  bool isVenomous;
  
  public Mammel(string n , int a , bool h , bool v) : Animal (n , a , h){
    isVenomous = v;
  }
};







#endif
