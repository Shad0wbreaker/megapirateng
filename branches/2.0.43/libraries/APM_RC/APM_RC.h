#ifndef APM_RC_h
#define APM_RC_h

#define NUM_CHANNELS 8
#define MIN_PULSEWIDTH 900
#define MAX_PULSEWIDTH 2100

#include <inttypes.h>

// Radio channels
// Note channels are from 0!
#define CH_1 0
#define CH_2 1
#define CH_3 2
#define CH_4 3
#define CH_5 4
#define CH_6 5
#define CH_7 6
#define CH_8 7
#define CH_10 9    //PB5
#define CH_11 10   //PE3

class APM_RC_Class
{
  private:

  public:
	APM_RC_Class();
	void Init(void);
	void OutputCh(unsigned char ch, uint16_t pwm);
	uint16_t InputCh(unsigned char ch);
	unsigned char GetState();
	void Force_Out0_Out1(void);
	void Force_Out2_Out3(void);
	void Force_Out6_Out7(void);
	void setHIL(int16_t v[NUM_CHANNELS]);

  private:
	int16_t _HIL_override[NUM_CHANNELS];
};

extern APM_RC_Class APM_RC;

#endif
