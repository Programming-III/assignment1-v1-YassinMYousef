#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor{
  private:
    string visitorName;
    int ticketsBought;
  public:
  
    Visitor(string n, int t){
      visitorName = n;
      ticketsBought = t;
    }
    
    void displayInfo(){
      cout << "name is " << visitorName << "amount of tickets" << ticketsBought << endl;
    }
};






#endif
