/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource {

	CLKComplicationTemplate* _complicationTemplate;

}
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 ;
-(void)dealloc;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)_dateTemplate;
-(id)_weatherTemplate;
-(id)_weatherConditionsTemplate;
-(id)_alarmTemplate;
-(id)_timerTemplate;
-(id)_stopwatchTemplate;
-(id)_worldClockTemplate;
-(id)_batteryTemplate;
-(id)_heartrateTemplate;
-(id)_sunriseTemplate;
-(id)_wellnessTemplate;
-(id)_nextEventTemplate;
-(id)_messagesTemplate;
-(id)_moonPhaseTemplate;
-(id)_musicTemplate;
-(id)_radioTemplate;
-(id)_nowPlayingTemplate;
-(id)_workoutTemplate;
-(id)_breathingTemplate;
-(id)_reminderTemplate;
-(id)_stocksTemplate;
-(id)_newsTemplate;
-(id)_siriTemplate;
-(id)_temperatureStringForDegreesFahrenheit:(long long)arg1 convertToCelsius:(BOOL)arg2 ;
-(id)currentSwitcherTemplate;
@end

