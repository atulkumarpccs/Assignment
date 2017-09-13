#include<Vehicle.h>


class Security:protected Vehicle, public CarPark
{

public:
	    Security(int SecurityLevel_First, int SecurityLevel_Second) :m_SecurityLevel_First(SecurityLevel_First),
		m_SecurityLevel_Second(SecurityLevel_Second)
	{
	}
	
protected:
  /* Overridinding the function of business and Base class  */
		
private:

	int m_SecurityLevel_First;      /*without CCTV */
	int m_SecurityLevel_Second;     /*with CCTV */


};
