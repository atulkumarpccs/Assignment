#ifndef  VEHICLE_H
#define  VEHICLE_H

#include<iostream>
#include<iostream>
#include<string>
#include<Business/CarPark.h>

/*TODO: Need to be removed in Cpp file */
using namespace std;  

class Vehicle :public CarPark
{

public:

	/* Constructer and destructer */

	Vehicle()
	virtual ~Vehicle();
protected:

		int mVehicleSize;
		
		/* Overridinding the function of business class */
		 void parkvehicle();
		 void Unparkvehicle();
	         void Entrytime();
	         void Exittime();
private:

	void VehicleEntryTime();

	enum  VehicleCatogry
	{
		ENUM_VEHICLE_CATOGRY_EXTRALIGHTWEIGHT = 0,
		ENUM_VEHICLE_CATOGRY_LIGHTWEIGHT      = 1,
		ENUM_VEHICLE_CATOGRY_HEAVYWEIGHT      = 2,
		ENUM_VEHICLE_CATOGRY_EXTRAHEAVYWEIGHT = 2

	};

	enum VehicleColour
	{
		ENUM_VEHICLE_COLOUR_RED    = 0,
		ENUM_VEHICLE_COLOUR_WHITE  = 1,
		ENUM_VEHICLE_COLOUR_GREEN  = 2,
		ENUM_VEHICLE_COLOUR_BLUE   = 3,
		ENUM_VEHICLE_COLOUR_GRAY   = 4,
		ENUM_VEHICLE_COLOUR_OTHERS = 5

	};

	enum VehicleType
	{
		ENUM_VEHICLE_TYPE_MOTORCYCLE=0,
		ENUM_VEHICLE_TYPE_CAR=1,
		ENUM_VEHICLE_TYPE_TRUCK=2,
		ENUM_VEHICLE_TYPE_OTHERS=3
	};

	int m_VehicleRegestrationId;
	/*assumtion it's only digit */
	int m_m_VehicleRegestrationNo;

	string m_VehicleComapanyName;

	/*Getter & setter for the Vehicle time */

	virtual void VehicleGetEntryTime() const;
	virtual void VehicleSetExitTime();
	
	/*Disallow assignement and pass by value*/
	
	Vehicle(const Vehicle & src);

	Vehicle& operator = (const Vehicle &src);
	


};

#endif
