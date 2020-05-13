#include "CMixerSpeaker.h"

CMixerSpeaker::CMixerSpeaker() : CDevice(), CLoudSpeaker(), CFlashPlayer()
{
	cout << "Mixer Speaker default constructor" << endl;
	cout << "====================" << endl << endl;
}
CMixerSpeaker::CMixerSpeaker(string name, string modelLS, string modelFP) : CDevice(name), CLoudSpeaker(name, modelLS), CFlashPlayer(name, modelFP)
{
	cout << "Mixer Speaker constructor " << endl;
	cout << "====================" << endl << endl;
}
CMixerSpeaker::CMixerSpeaker(const CMixerSpeaker& a) : CDevice(a), CLoudSpeaker(a), CFlashPlayer(a)
{
	cout << "Mixer Speaker copy constructor" << endl;
	cout << "====================" << endl << endl;
}
CMixerSpeaker::~CMixerSpeaker()
{
	cout << "Mixer Speaker destructor" << endl;
	cout << "====================" << endl << endl;
}
void CMixerSpeaker::ShowProperties()
{
	cout << "My model is : Speakers " << str_LS << " and Flash Player" << str_FP << endl;
	cout << "====================" << endl << endl;
}
void CMixerSpeaker::har()
{
	cout << "My characteristics " << num_Dev << " max power" << endl;
	cout << "====================" << endl << endl;
}
CMixerSpeaker& CMixerSpeaker::operator=(CMixerSpeaker& a)
{
	cout << "Mixer Speaker operatotor =" << endl;
	CLoudSpeaker::operator=(a);
	CFlashPlayer::operator=(a);
	return *this;
}