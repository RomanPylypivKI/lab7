#include "CLoudSpeaker.h"

CLoudSpeaker::CLoudSpeaker() : CDevice()
{
	cout << "Loud Speaker default constructor" << endl;
	str_LS = new string;
	*str_LS = "No name";
	cout << "====================" << endl << endl;
}
CLoudSpeaker::CLoudSpeaker(string name, string modelLS): CDevice(name)
{
	cout << "Loud Speaker constructor " << endl;
	str_LS = new string;
	*str_LS = modelLS;
	cout << "====================" << endl << endl;
}
CLoudSpeaker::CLoudSpeaker(const CLoudSpeaker& a) : CDevice(a)
{
	cout << "Loud Speaker copy constructor" << endl;
	str_LS = a.str_LS;
	cout << "====================" << endl << endl;
}
CLoudSpeaker::~CLoudSpeaker()
{
	cout << "Loud Speaker destructor" << endl;
	delete str_LS;
	cout << "====================" << endl << endl;
}
void CLoudSpeaker::ShowProperties()
{
	cout << "My model is " << str_LS << endl;
	cout << "====================" << endl << endl;
}
void CLoudSpeaker::har()
{
	cout << "My characteristics " << num_Dev << " max power" << endl;
	cout << "====================" << endl << endl;
}
CLoudSpeaker& CLoudSpeaker::operator=(CLoudSpeaker& a)
{
	cout << "Loud Speaker operatotor =" << endl;
	delete str_LS;
	str_LS = a.str_LS;
	CDevice::operator=(a);
	return *this;
}