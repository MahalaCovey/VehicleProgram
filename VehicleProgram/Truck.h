// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Specification file for the Car class.
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle
{
private:
	// Member variable
	int towing;

public:
	Truck(); // Default constructor
	Truck(string, int, int); // Constructor
	// Setters
	void setTowing(int);
	// Getters
	int getTowing() const;
	void displayInfo() const;
};
#endif

