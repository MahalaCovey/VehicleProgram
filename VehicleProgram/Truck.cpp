// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Implementation file for the Car class.
#include "Truck.h"
#include <string>
#include <iostream>
using namespace std;

//************************************************************************
// Default constructor.													 *
//************************************************************************
Truck::Truck()
{
	towing = 0;
}

//************************************************************************
// Constructor.															 *
//************************************************************************
Truck::Truck(string m, int y, int t) : Vehicle(m, y)
{
	towing = t;
}

//************************************************************************
// The setTowing member function sets the value of the towing member.    *
//************************************************************************
void Truck::setTowing(int t)
{
	towing = t;
}


//************************************************************************
// The getTowing member function returns a Truck's towing capacity.		 *
//************************************************************************
int Truck::getTowing() const
{
	return towing;
}


//************************************************************************
// The displayInfo member function displays the contents of a Truck.	 *
//************************************************************************
void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towing << endl;
}