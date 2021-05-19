#include <stdexcept>
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "source/code/base.hpp"
#include "source/code/coord.hpp"
#include "source/code/base.cpp"
#include "source/code/coord.cpp"
using namespace std;


int main(){
    Grille g;
    g.affiche();
    Place Nid(Coord(2,2),"N");
    Fourmi f1(Coord(3,2),47);
    Place fourmi1(f1.coord(),"f",47);
    g.rangePlace(Nid);
    g.rangePlace(fourmi1);
    cout<<endl<<"==============================================" <<endl;
    g.affiche();
}