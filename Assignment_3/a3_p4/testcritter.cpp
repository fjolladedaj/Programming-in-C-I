/*
 CH08-320142
 a3 p4.cpp
 Fjolla Dedaj
 f.dedaj@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    //first instance using empty constructor
    Critter a;
    a.setHunger(5);
    a.print();
    
    /* second instance using parametric
     constructor containing name only */
    Critter b("critter");
    b.setHunger(5);
    b.print();
    
    /*third instance using parametric
     constructor containing all properties*/
    Critter c1("critter", 5, 20, 30);
    c1.print();
    
    /*fourth instance using parametric
     constructor containing all properties.
     height is not supplied -> defaults to 15*/
    Critter c2("critter", 5, 20);
    c2.print();
    
    //Create a new instance which calls constructor 4
    Critter c3("critter", 5, 20, 30, 12);
    c3.print();
    
    return 0;
    
}

