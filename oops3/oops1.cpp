#include "car.cpp"
#include "vehicle.cpp"
#include<iostream>

using namespace std;


// class vehicle2
// {
//     private:
//     int maxspeed;

//     protected:
//     int numTyres;

//     public:
//     string color;
// };


int main()
{
    vehicle v;
    v.color = "red";
    // v.numTyres = 2;   //ERROR AS PROTECTED MEMEBER CAN ONLY BE ACCESSIBLE IN THE DERIVED CLASS AND NOWWHERE OUTSIDE THE CLASS


    return 0;
}