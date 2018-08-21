/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NTKDateComplication;

@interface NTKDateComplicationController : NTKComplicationController <NTKTimeTravel> {

	unsigned long long _displayDateStyle;
	NSDate* _timeTravelDate;

}

@property (nonatomic,readonly) NTKDateComplication * complication; 
@property (nonatomic,__weak,readonly) id<NTKDateComplicationDisplay> legacyDisplay; 
+(id)textForDateStyle:(unsigned long long)arg1 ;
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 ;
+(id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2 ;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(id)complicationApplicationIdentifier;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleTimeChangeNotification;
-(void)_setTextInDisplayIfNeededWithDate:(id)arg1 ;
@end

