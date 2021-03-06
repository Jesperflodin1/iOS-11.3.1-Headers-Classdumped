/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW102 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedFocalRatioRamp;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(id)initWithEffectStatus:(int)arg1 ;
-(BOOL)isDepthAvailable;
-(SCD_Struct_BW102*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 forFrontCamera:(BOOL)arg3 ;
-(void)_resetSimulatedFocalRatioRampWithEffectStatus:(int)arg1 forFrontCamera:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
@end

