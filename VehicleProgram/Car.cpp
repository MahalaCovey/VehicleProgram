// Mahala Covey
// CIS 1202 800
// April 4, 2024

// Implementation file for the Car class.
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

//************************************************************************
// Default constructor.													 *
//************************************************************************
Car::Car()
{
	doors = 0;
}

//************************************************************************
// Constructor.															 *
//************************************************************************
Car::Car(int d)
{
	doors = d;
}

//************************************************************************
// The setDoors member function sets the value of the door member.		 *
//************************************************************************
void Car::setDoors(int d)
{
	doors = d;
}


//************************************************************************
// The getDoors member function returns a Car's number of doors.		 *
//************************************************************************
int Car::getDoors() const
{
	return doors;
}


//************************************************************************
// The displayInfo member function displays the contents of a Car.		 *
//************************************************************************
void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}