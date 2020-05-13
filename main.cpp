#include "CMixerSpeaker.h"
#include <string>

int main(void)
{
	cout << "----- Creating object -----" << endl;
	cout << "First:" << endl;
	CLoudSpeaker a1("Sven", "ST-134");
	a1.Set(90);
	a1.har();
	a1.ShowProperties();
	cout << "Second:" << endl;
	CFlashPlayer a2("AUX", "3L");
	a2.Set(45);
	a2.har();
	a2.ShowProperties();
	cout << "Third:" << endl;
	CMixerSpeaker a3("JBL", "345", "my");
	a3.Set(50);
	a3.har();
	a3.ShowProperties();
	cout << "Fourth" << endl;
	CDevice* a4;
	a4 = &a3;
	a4->Set(50);
	a4->har();
	a4->ShowProperties();
}