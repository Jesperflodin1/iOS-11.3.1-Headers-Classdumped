/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class NTKColoringLabel, NTKDigitalTimeLabel, NSTimeZone, NSString;

@interface NTKWorldClockLargeModuleView : NTKComplicationModuleView <NTKWorldClockComplicationDisplay> {

	NTKColoringLabel* _cityLabel;
	NTKDigitalTimeLabel* _timeLabel;
	NTKColoringLabel* _dayLabel;
	NTKColoringLabel* _differenceLabel;
	NSTimeZone* _timeZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)_layoutContentView;
-(void)setOverrideDate:(id)arg1 ;
-(void)setLongCity:(id)arg1 ;
-(void)startTimeTravelAnimated:(BOOL)arg1 ;
-(void)endTimeTravelAnimated:(BOOL)arg1 ;
-(void)setSecondaryForegroundColor:(id)arg1 ;
-(id)_timeFontOfSize:(double)arg1 ;
-(id)_timeFontOfSize:(double)arg1 monospace:(BOOL)arg2 ;
-(void)_updateTimeFont:(BOOL)arg1 ;
-(void)_updateDayAndDifferenceLabels;
@end

