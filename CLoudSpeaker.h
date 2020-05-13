#include "CDevice.h"

#ifndef LSpeaker
#define LSpeaker

class CLoudSpeaker : virtual public CDevice
{
protected:
	string* str_LS;
public:
	CLoudSpeaker();
	CLoudSpeaker(string name, string modelLS);
	CLoudSpeaker(const CLoudSpeaker& a);
	virtual ~CLoudSpeaker();
	
	void ShowProperties();
	virtual void har();
	CLoudSpeaker& operator= (CLoudSpeaker&);
};
#endif