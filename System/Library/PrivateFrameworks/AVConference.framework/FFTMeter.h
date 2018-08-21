/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface FFTMeter : NSObject {

	vDSP_DFT_SetupStructRef fftSetup;
	DSPSplitComplex* dspSplitComplex;
	float sampleHistory[3840];
	float magnitudeBuffer[1920];
	float fftBuffer[3840];
	float windowBuffer[3840];
	float windowHistory[3840];
	float octaveDbOld[54];
	float octaveDb[54];
	float octaveDbFilt[55];
	float lerpIdxs[66];
	float fftNormFactor;
	float adjust0DB;

}
-(id)init;
-(void)dealloc;
-(id)computeWithSampleBuffer:(opaqueVCAudioBufferListRef)arg1 ;
@end

