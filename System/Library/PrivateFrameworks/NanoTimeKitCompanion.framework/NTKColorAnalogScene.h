/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NTKCollectionNode, UIColor;

@interface NTKColorAnalogScene : NTKAnalogScene {

	NTKCollectionNode* _ticks;
	NTKCollectionNode* _timeScrubbingReplacementTicks;
	UIColor* _monogramColor;

}
-(id)initWithSize:(CGSize)arg1 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(void)applyColor:(id)arg1 ;
-(id)scrubbingObscuredCollectionNodes;
-(void)applyTransitionFraction:(double)arg1 fromTickColor:(id)arg2 toTickColor:(id)arg3 ;
-(void)setZoomFraction:(double)arg1 diameter:(double)arg2 ;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setTickAlphaFromFraction:(double)arg1 ;
-(void)hideTicks;
-(void)showTicks;
@end

