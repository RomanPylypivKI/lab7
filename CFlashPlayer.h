#include "CDevice.h"

#ifndef FPlayer
#define FPlayer

class CFlashPlayer : virtual public CDevice
{
protected:
	string* str_FP;
public:
	CFlashPlayer();
	CFlashPlayer(string name, string modelFP);
	CFlashPlayer(const CFlashPlayer& a);
	virtual ~CFlashPlayer();

	void ShowProperties();
	virtual void har();
	CFlashPlayer& operator= (CFlashPlayer&);
};
#endif