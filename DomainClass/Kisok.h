/*
*This file is introduced for the kisok use in parking system which is derived Carpark 
*/
#ifndef KISOK_H
#define KISOK_H

#include<Business/CarPark>
class Kisok :public CarPark
{

public:

/* Constructer and destructer */

	Kisok()
	virtual ~Kisok();
	
	/*
	*TODO: Override  some of the functionality here of business class here specific to kisok support or limitation
	*/

protected:

private:

/*Disallow assignement and pass by value*/
	
	Kisok(const Kisok & src);

	Kisok& operator = (const Kisok &src);

};
#endif /*KISOK */
