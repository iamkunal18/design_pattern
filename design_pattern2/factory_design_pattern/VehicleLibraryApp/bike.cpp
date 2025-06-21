#include "bike.hpp"
#include <iostream>

using namespace std;

void Bike::createVehicle() 
{
    cout << "Bike created!" << endl;
}
// This function implements the createVehicle method for the Bike class, which is derived from the Vehicle class.
// It outputs a message indicating that a bike has been created. This is part of the Factory Design Pattern, where different vehicle types can be created using a common interface.
// The Bike class overrides the pure virtual function createVehicle from the Vehicle class, providing its own implementation.
// This allows for polymorphism, where the createVehicle method can be called on a Vehicle pointer or reference, and the appropriate Bike implementation will be executed.
// The use of the Factory Design Pattern allows for the creation of different vehicle types (like Car, Truck, etc.) without needing to know the specific class being instantiated.
// This promotes code reusability and flexibility, as new vehicle types can be added without modifying existing code.
// The Bike class is part of the VehicleLibraryApp, which demonstrates the Factory Design Pattern in action.
