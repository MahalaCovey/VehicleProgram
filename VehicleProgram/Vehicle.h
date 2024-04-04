// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Specification file for the Vehicle class.
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
private:
	// Member variables
	string manufacturer; 
	int year;

public:
	Vehicle(); // Default constructor
	Vehicle(string, int); // Constructor
	// Setters
	void setManufacturer(string);
	void setYear(int);
	// Getters
	string getManufacturer() const;
	int getYear() const;
	void displayInfo() const;
};
#endif