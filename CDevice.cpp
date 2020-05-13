#include "CDevice.h"

CDevice::CDevice() : str_Dev(new string), num_Dev(0)
{
	cout << "Device default constructor" << endl;
	str_Dev = new string;
	*str_Dev = "No name";
	cout << "====================" << endl << endl;
}
CDevice::CDevice(string name)
{
	cout << "Device constructor" << endl;
	str_Dev = new string;
	*str_Dev = name;
	cout << "====================" << endl << endl;
}
CDevice::CDevice(const CDevice& a)
{
	cout << "Device copy constructor" << endl;
	str_Dev = a.str_Dev;
	cout << "====================" << endl << endl;
}
CDevice::~CDevice()
{
	cout << "Device destructor" << endl;
	delete str_Dev;
	cout << "====================" << endl << endl;
}
int CDevice::Get()
{
	return num_Dev;
}
void CDevice::Set(int a)
{
	num_Dev = a;
	cout << "====================" << endl << endl;
}
void CDevice::ShowProperties()
{
	cout << "I have no properties" << endl;
	cout << "====================" << endl;
}
CDevice& CDevice::operator=(const CDevice& a)
{
	cout << "Device operator =" << endl;
	delete str_Dev;
	str_Dev = a.str_Dev;
	return *this;
}