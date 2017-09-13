#include<Vehicle.h>


class Security:protected Vehicle, public CarPark
{

public:
	 Security();
	 virtual ~Security()
	
protected:
  /* Overridinding the function of business and Base class  */
  Parking SecurityOption();
		
private:

	int m_SecurityLevel_First;      /*without CCTV */
	int m_SecurityLevel_Second;     /*with CCTV */
	
	/*Disallow assignement and pass by value*/
	
	Security(const Security & src);

	Security& operator = (const Security &src);


};
