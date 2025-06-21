#include "vehicle_factory.hpp"

Vehicle* VehicleFactory::getVehicle(const string& vehicleType) 
{
    Vehicle* vehicle;

    if (vehicleType != "Car" && vehicleType != "Bike") 
    {
        cout << "Invalid vehicle type!" << endl;
        return nullptr;
    }
    else if (vehicleType == "Car") 
    {
        cout << "Creating a Car..." << endl;
        vehicle = new Car();
    } 
    else 
    {
        cout << "Creating a Bike..." << endl;
        vehicle = new Bike();
    }

    return vehicle;
}
