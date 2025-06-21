/*
Compilation Instructions:

Steps to run:
g++ -c car.cpp bike.cpp
ar ru vehicle_app.a car.o bike.o
g++ -o app app.cpp vehicle_app.a 
./app

Explanation of Steps:
1. g++ -c car.cpp bike.cpp
   - it will create bike.o and car.o files.
2. ar ru vehicle_app.a car.o bike.o
   - it will create vehicle_app.a file.
   - It is used to create or update a static library named vehicle_app.a 
   by combining the object files car.o and bike.o. Here's a breakdown of the command:

   - Explanation:
    ar : The archiver tool, used to create, modify, and extract static libraries (archive files) in Unix-like systems.
    r : Replace or add files to the archive. If the archive (vehicle_app.a) already exists, this flag replaces the existing object files with the new ones.
    u : Update only if the object file (car.o or bike.o) is newer than the one already in the archive. This avoids unnecessary replacements.
    vehicle_app.a : The name of the static library being created or updated. Static libraries typically have the .a extension.
    car.o bike.o : The object files to be added to the static library. These files contain compiled code for the Car and Bike classes.
    
    What Happens:
    The ar command combines the object files car.o and bike.o into a single static library file named vehicle_app.a.
    This static library can later be linked with other programs to use the functionality provided by the Car and Bike classes.

3. g++ -o app app.cpp vehicle_app.a 
    - it will create app file.
    - This command compiles the app.cpp source file and links it with the static library vehicle_app.a to create an executable named app.
    - Here's a breakdown of the command:
    
    - Explanation:
     g++ : The GNU C++ compiler, used to compile C++ programs.
     -o app : Specifies the name of the output executable file. In this case, it will be named "app".
     app.cpp : The source file containing the main function and other code for the application.
     vehicle_app.a : The static library created in step 2, which contains the compiled code for the Car and Bike classes.
    
     What Happens:
     The g++ compiler compiles the app.cpp source file and links it with the vehicle_app.a static library.
     The resulting executable file named "app" can be run to execute the program.

4. ./app
   - it will run the app file.
   - This command executes the compiled application named "app" that was created in the previous step.
   - When you run this command, it will prompt you to enter a vehicle type (Car/Bike) and then create an instance of the 
     specified vehicle type, demonstrating the Factory Design Pattern.
*/

#include <iostream>
#include "vehicle_factory.hpp"

using namespace std;

int main()
{
    string vehicleType;
    cout << "Enter vehicle type (Car/Bike): ";
    cin >> vehicleType;

    Vehicle* vehicle = VehicleFactory::getVehicle(vehicleType);
    
    if (vehicle == nullptr) {
        cout << "Failed to create vehicle." << endl;
        return 1; // Exit if vehicle creation failed
    }

    vehicle->createVehicle();

    delete vehicle;

    return 0;
}
