#ifndef vehicle_hpp
#define vehicle_hpp

class Vehicle 
{
    public:
        virtual void createVehicle() = 0; // Pure virtual function
        virtual ~Vehicle() {} // Virtual destructor to ensure proper cleanup of derived classes
};

#endif // vehicle.cpp
