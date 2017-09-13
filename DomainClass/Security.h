#include<Vehicle.h>


class Security:public Vehicle
{

public:
	    Security(int SecurityLevel_First, int SecurityLevel_Second) :m_SecurityLevel_First(SecurityLevel_First),
		m_SecurityLevel_Second(SecurityLevel_Second)
	{
	}
	
protected:
private:

	int m_SecurityLevel_First;      /*without CCTV */
	int m_SecurityLevel_Second;     /*with CCTV */


};
