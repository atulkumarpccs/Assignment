
/*
*This is business class of car parking application which provides the functlity to the user /admin 
* One businees class & per application & domains class can be multiple
* In future extension of this application so design patern can be applied on this class like Factory
*/
#ifndef CAR_H
#define CAR_H


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
	/*consctructer*/
	 CarPark(); 
	/*Virtual descructer*/
	~virtual CarPark();   

      /*Function are made virtual so other class can be derived from here */
	virtual void parkvehicle();
	virtual void Unparkvehicle();
	virtual void Entrytime();
	virtual void Exittime();
	virtual int ParkingFloorlocation();

	virtual Parking SecurityOption();
	virtual Expected timeforparking();
	virtual ParkingRecepiet();
	
protected:
	/*option provided to the admin of parking setter & getter*/
	virtual bool GetParkingstatus() const;
	virtual bool SetParkingAvalibility();

private:
	/*Disallow assignement and pass by value*/
	
	CarPark(const CarPark & src);

	CarPark& operator = (const CarPark &src);

};

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
