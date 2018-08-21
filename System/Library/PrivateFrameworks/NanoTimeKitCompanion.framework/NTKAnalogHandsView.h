/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class NTKColoringImageView, NSNumber, NSTimer, NTKHandView, NSDate, NSCalendar, UIColor, NSString;

@interface NTKAnalogHandsView : UIView <NTKTimeView> {

	NTKColoringImageView* _colorTransitionSecondHandLowerView;
	NTKColoringImageView* _colorTransitionSecondHandUpperView;
	NTKColoringImageView* _colorTransitionSecondHandSmallCircleView;
	NTKColoringImageView* _colorTransitionSecondHandLargeCircleView;
	BOOL _animatingToNewDate;
	NSNumber* _displayLinkToken;
	NSTimer* _animationUpdateTimer;
	double _timeOffset;
	BOOL _timeScrubbing;
	BOOL _frozen;
	BOOL _showDebugClientSideHands;
	BOOL _shouldRestoreSecondHandAfterScrubbing;
	NTKHandView* _hourHandView;
	NTKHandView* _minuteHandView;
	NTKHandView* _secondHandView;
	NSDate* _overrideDate;
	NSCalendar* _calendar;
	long long _dataMode;
	UIColor* _inlayColor;
	NTKHandView* _hourHandView_clientSide;
	NTKHandView* _minuteHandView_clientSide;
	NTKHandView* _secondHandView_clientSide;

}

@property (nonatomic,readonly) NTKHandView * hourHandView_clientSide;                 //@synthesize hourHandView_clientSide=_hourHandView_clientSide - In the implementation block
@property (nonatomic,readonly) NTKHandView * minuteHandView_clientSide;               //@synthesize minuteHandView_clientSide=_minuteHandView_clientSide - In the implementation block
@property (nonatomic,readonly) NTKHandView * secondHandView_clientSide;               //@synthesize secondHandView_clientSide=_secondHandView_clientSide - In the implementation block
@property (assign,nonatomic) BOOL showDebugClientSideHands;                           //@synthesize showDebugClientSideHands=_showDebugClientSideHands - In the implementation block
@property (nonatomic,retain) NTKHandView * hourHandView;                              //@synthesize hourHandView=_hourHandView - In the implementation block
@property (nonatomic,retain) NTKHandView * minuteHandView;                            //@synthesize minuteHandView=_minuteHandView - In the implementation block
@property (nonatomic,retain) NTKHandView * secondHandView;                            //@synthesize secondHandView=_secondHandView - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreSecondHandAfterScrubbing;              //@synthesize shouldRestoreSecondHandAfterScrubbing=_shouldRestoreSecondHandAfterScrubbing - In the implementation block
@property (nonatomic,readonly) NSDate * overrideDate;                                 //@synthesize overrideDate=_overrideDate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) BOOL timeScrubbing;                                    //@synthesize timeScrubbing=_timeScrubbing - In the implementation block
@property (assign,nonatomic) long long dataMode;                                      //@synthesize dataMode=_dataMode - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                             //@synthesize frozen=_frozen - In the implementation block
@property (nonatomic,retain) UIColor * inlayColor;                                    //@synthesize inlayColor=_inlayColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)preferredCountOfInstancesToCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)isFrozen;
-(void)setFrozen:(BOOL)arg1 ;
-(NSCalendar *)calendar;
-(long long)dataMode;
-(NTKHandView *)secondHandView;
-(NTKHandView *)minuteHandView;
-(NTKHandView *)hourHandView;
-(BOOL)timeScrubbing;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setInlayColor:(UIColor *)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(void)setDataMode:(long long)arg1 ;
-(void)applyColor:(id)arg1 ;
-(UIColor *)inlayColor;
-(NSDate *)overrideDate;
-(void)_significantTimeChanged;
-(void)_deregisterFromDisplayLinkManager;
-(void)_enumerateHandViews:(/*^block*/id)arg1 ;
-(void)_startNewTimeAnimation;
-(id)displayTime;
-(void)_stopTimeAnimation;
-(void)_repointDebugHandsToCurrentTime;
-(BOOL)_canRunTimeAnimation;
-(void)_handleDisplayLink;
-(void)scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enumerateSecondHandViewsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldRestoreSecondHandAfterScrubbing;
-(void)_removeColorTransitionViews;
-(BOOL)_dontRepointDebugHands;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_accessibilityInvalidateElements;
-(void)setHourHandView:(NTKHandView *)arg1 ;
-(void)setMinuteHandView:(NTKHandView *)arg1 ;
-(void)setSecondHandView:(NTKHandView *)arg1 ;
-(NTKHandView *)hourHandView_clientSide;
-(NTKHandView *)minuteHandView_clientSide;
-(NTKHandView *)secondHandView_clientSide;
-(BOOL)showDebugClientSideHands;
-(void)setShowDebugClientSideHands:(BOOL)arg1 ;
-(void)setShouldRestoreSecondHandAfterScrubbing:(BOOL)arg1 ;
@end

