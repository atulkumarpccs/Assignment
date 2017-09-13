#ifndef PARKPRICE_H
#define PARKPRICE_H
#include<security.h>

class ParkingPrice :public security,public vehicle
{

public:

        /* Constructer and destructer */

	ParkingPrice()
	virtual ~ParkingPrice();
	
	int SizeOfVehicle;
	int ParkingLocation;
	

protected:

private:

	const int Trucksizelot = 2;
	const int Carsizelot = 1;
	const int Motocyclesizelot = 0.5;
	int calculate Price();

/*Disallow assignement and pass by value*/
	
	ParkingPrice(const ParkingPrice & src);

	ParkingPrice& operator = (const ParkingPrice &src);

};

#endif
