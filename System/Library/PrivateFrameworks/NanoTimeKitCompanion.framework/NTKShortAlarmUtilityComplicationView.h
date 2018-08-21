/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>
#import <libobjc.A.dylib/NTKAlarmComplicationDisplay.h>

@class NSString;

@interface NTKShortAlarmUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKAlarmComplicationDisplay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(void)setStateAllAlarmsOff;
-(void)setStateNoAlarms;
-(void)setStateActiveWithDate:(id)arg1 ;
-(void)setStateSnoozingWithDuration:(double)arg1 ;
@end

