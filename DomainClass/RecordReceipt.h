#ifndef RECORDRECEPIT_H
#define RECORDRECEPIT_H

#include <Vehicle.h>
#include <Security.h>
#include <ParkPrice.h>

class RecordReceipt :public Vehicle, public Security, public ParkPrice
{
public:
/* Constructer and destructer */

	RecordReceipt()
	virtual ~RecordReceipt();

private:

	int Entrytime();
	int ExitTime();
	void TotalTime();
	int TotalCharges();
	int Parking Location();
	
	/*Disallow assignement and pass by value*/
	
	RecordReceipt(const RecordReceipt & src);

	RecordReceipt& operator = (const RecordReceipt &src);


};

#endif // !RECORDRECEPIT_H

