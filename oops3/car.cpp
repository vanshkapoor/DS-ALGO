#include "vehicle.cpp"
#include<iostream>

using namespace std;

class  car: public vehicle{
    public:
    int numGears;

    // car() : vehicle(5){  //thats how the parent constructor is called first
    //     constructor
    // }



    void print()
    {
        cout<<"num of tyres = "<<numTyres;
        cout<<"color = "<<color;
    }
};



// DEFAULT ACCESS MODIFIER = PRIVATE
// ON PUBLIC   :   PUBLIC ->PUBLIC , PROTECTED->PROTECTED
// ON PROTECTED:   PROTECTED -> PROTECTED , PUBLIC ->PROTECTED
// ON PRIVATE  :   PROTECTED -> PRIVATE , PUBLIC -> PRIVATE  