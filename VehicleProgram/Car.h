// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Specification file for the Car class.
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std; 

class Car : public Vehicle
{
private:
	// Member variable
	int doors;

public:
	Car(); // Default constructor
	Car(string, int, int); // Constructor
	// Setters
	void setDoors(int);
	// Getters
	int getDoors() const;
	void displayInfo() const;
};
#endif
