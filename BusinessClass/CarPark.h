#ifndef CAR_H
#define CAR_H
/*
*This is business class of car parking application which provides the functlity to the user /admin 
* One businees class & per application & domains class can be multiple
* In future extension of this application so design patern can be applied on this class like Factory
*/

#include<iostream>
#include<string>
#include<Kisok.h>
#include<Vehicle.h>

#define NO OF KISOK 2
#define NO OF VEHICLE 1000

using namespace std;

class CarPark
{
public:
	 CarPark(); //consctructer
	~CarPark();   //descructer

				  //Function are made virtual so other class 
	virtual void parkvehicle();
	virtual void Unparkvehicle();
	virtual void Entrytime();
	virtual void Exittime();
	virtual int ParkingFloorlocation();

	virtual Parking SecurityOption();
	virtual Expected timeforparking();
	virtual ParkingRecepiet();

	//option provided to the admin of parking setter & getter
	virtual bool GetParkingstatus();
	virtual bool SetParkingAvalibility();

private:
	//Disallow assignement and pass by value
	
	CarPark(const CarPark & src);

	CarPark& operator = (const CarPark &src);

	

	

};

CarPark::CarPark()
{
	cout << "constructer of businees class" << endl;
}

CarPark::~CarPark()
{
	cout << "Distructer of businees class" << endl;
}


int main(int argc, const char * argv[])

{


	/*
	*use of aggergatation object craetion of both of object for Kisok and vehicle
	*/
	Kisok::Kisok * Obj1;
	Vehicle::Vehicle *obj2;


	return 0;

}

#endif 
