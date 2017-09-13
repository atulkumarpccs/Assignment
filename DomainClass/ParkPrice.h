#ifndef PARKPRICE_H
#define PARKPRICE_H
#include<security.h>

class ParkingPrice :public security,public vehicle
{

public:

	int SizeOfVehicle;
	int ParkingLocation;
	

protected:

private:

	const int Trucksizelot = 2;
	const int Carsizelot = 1;
	const int Motocyclesizelot = 0.5;
	int calculate Price();


};

#endif
