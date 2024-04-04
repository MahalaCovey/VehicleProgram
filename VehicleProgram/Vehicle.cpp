// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Implementation file for the Vehicle class.
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

//************************************************************************
// Default constructor.													 *
//************************************************************************
Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}

//************************************************************************
// Constructor.															 *
//************************************************************************
Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year = y;
}

//************************************************************************
// The setManufacturer member function sets the value of the			 *
// manufacturer member.													 *
//************************************************************************
void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

//************************************************************************
// The setYear member function sets the value of the year member		 *
//************************************************************************
void Vehicle::setYear(int y)
{
	year = y;
}

//************************************************************************
// The getManufacturer member function returns a Vehicle's manufacturer. *
//************************************************************************
string Vehicle::getManufacturer() const
{
	return manufacturer;
}

//************************************************************************
// The getYear member function returns a Vehicle's build year.			 *
//************************************************************************
int Vehicle::getYear() const
{
	return year;
}

//************************************************************************
// The displayInfo member function displays the contents of a Vehicle.   *
//************************************************************************
void Vehicle::displayInfo() const
{
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}