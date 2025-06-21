#ifndef bike_hpp
#define bike_hpp

#include "vehicle.hpp"

class Bike : public Vehicle 
{
    public:
        void createVehicle();
};

#endif // bike_hpp
// This header file defines the Bike class, which is derived from the Vehicle class.
// It declares the createVehicle method, which is a pure virtual function that must be implemented by the Bike class.
// The Bike class is part of the Factory Design Pattern, allowing for the creation of different vehicle types using a common interface.
