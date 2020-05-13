#include <stdlib.h>
#include <cstring>
#include <iostream>
using namespace std;

#ifndef Device
#define Device

class CDevice
{
protected:
	int num_Dev;
	string* str_Dev;
public:
	CDevice();
	CDevice(string name);
	CDevice(const CDevice& a);
	virtual ~CDevice();
	
	int Get();
	void Set(int);
	
	void ShowProperties();
	virtual void har() = 0;
	CDevice& operator=(const CDevice&);
};

#endif