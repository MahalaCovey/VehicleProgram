// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Driver for the Vehicle, Car, and Truck classes.
#include "Vehicle.h"
#include "Car.h"
//#include <"Truck.h">
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// Vehicle members
	string vehicleManufacturer;
	int vehicleYear;

	// Car members
	string carManufacturer;
	int carYear;
	int carDoors;

	// Truck members
	/*string truckManufacturer;
	int truckYear;
	int truckTowing;*/

	cout << "Vehicle Program" << endl;

	// Handling Vehicle object 
	cout << "\nVehicle:" << endl;
	cout << "Enter the manufacturer: "; // Get user input for Vehicle object
	getline(cin, vehicleManufacturer);
	cout << "Enter the year built: ";
	cin >> vehicleYear;
	Vehicle vehicle(vehicleManufacturer, vehicleYear); // Store user input in Vehicle object
	vehicle.displayInfo(); // Call displayInfo on Vehicle object

	// Handling Car object 
	cout << "\nCar:" << endl;
	cout << "Enter the manufacturer: "; // Get user input for Car object
	cin.ignore(); // Ignore newline charcter in keyboard buffer
	getline(cin, carManufacturer);
	cout << "Enter the year built: ";
	cin >> carYear;
	cout << "Enter number of doors: ";
	cin >> carDoors;
	Car car(carManufacturer, carYear, carDoors); // Store user input in Car object
	car.displayInfo(); // Call displayInfo on Car object

	return 0;
}