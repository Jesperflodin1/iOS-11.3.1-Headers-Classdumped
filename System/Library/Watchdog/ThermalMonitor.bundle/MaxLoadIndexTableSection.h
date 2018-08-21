/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MaxLoadIndexTableSection : NSObject {

	unsigned long long _constantMaxLI;
	unsigned long long _maxLI;
	unsigned long long _releaseMaxLI;
	unsigned long long _releaseRate;

}
-(id)initWithConstantMaxLI:(unsigned long long)arg1 ;
-(unsigned long long)getReleaseMaxLI:(BOOL)arg1 releaseRate:(int)arg2 ;
-(unsigned long long)getMaxLI:(unsigned long long)arg1 ;
-(id)init;
@end

