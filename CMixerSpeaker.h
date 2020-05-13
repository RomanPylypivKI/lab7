#include "CFlashPlayer.h"
#include "CLoudSpeaker.h"

#ifndef MX
#define MX

class CMixerSpeaker : public CLoudSpeaker, CFlashPlayer
{
public:
	CMixerSpeaker();
	CMixerSpeaker(string name, string modelLS, string modelFP);
	CMixerSpeaker(const CMixerSpeaker& a);
	~CMixerSpeaker();

	void ShowProperties();
	virtual void har();
	CMixerSpeaker& operator= (CMixerSpeaker&);
};
#endif