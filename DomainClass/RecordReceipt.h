#ifndef RECORDRECEPIT_H
#define RECORDRECEPIT_H

#include <Vehicle.h>
#include <Security.h>
#include <ParkPrice.h>

class RecordReceipt :public Vehicle, public Security, public ParkPrice
{

private:

	int Entrytime();
	int ExitTime();
	void TotalTime();
	int TotalCharges();
	int Parking Location();


};

#endif // !RECORDRECEPIT_H

