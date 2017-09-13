#ifndef PARKPRICE_H
#define PARKPRICE_H
#include<security.h>

class ParkingPrice :public security
{

public:

	int SizeOfVehicle;
	int ParkingLocation;

protected:

private:

	const int Trucksizelot = 2;
	const int Carsizelot = 1;
	const int Trucksizelot = 0.5;


};

#endif
