#include "CFlashPlayer.h"

CFlashPlayer::CFlashPlayer() : CDevice()
{
	cout << "Flash Player default constructor" << endl;
	str_FP = new string;
	*str_FP = "No name";
	cout << "====================" << endl << endl;
}
CFlashPlayer::CFlashPlayer(string name, string modelFP): CDevice(name)
{
	cout << "Flash Player constructor " << endl;
	str_FP = new string;
	*str_FP = modelFP;
	cout << "====================" << endl << endl;
}
CFlashPlayer::CFlashPlayer(const CFlashPlayer& a) : CDevice(a)
{
	cout << "Flash Player copy constructor" << endl;
	str_FP = a.str_FP;
	cout << "====================" << endl << endl;
}
CFlashPlayer::~CFlashPlayer()
{
	cout << "Flash Player destructor" << endl;
	delete str_FP;
	cout << "====================" << endl << endl;
}
void CFlashPlayer::ShowProperties()
{
	cout << "My model is " << str_FP << endl;
	cout << "====================" << endl << endl;
}
void CFlashPlayer::har()
{
	cout << "My characteristics " << num_Dev << " max power" << endl;
	cout << "====================" << endl << endl;
}
CFlashPlayer& CFlashPlayer::operator=(CFlashPlayer& a)
{
	cout << "Flash Player operatotor =" << endl;
	delete str_FP;
	str_FP = a.str_FP;
	CDevice::operator=(a);
	return *this;
}