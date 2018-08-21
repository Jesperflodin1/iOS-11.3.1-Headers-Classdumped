/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics
-(id)init;
-(id)allUsageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)lastHappenedWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 ;
-(id)usageMarkersWithTag:(unsigned)arg1 fromDate:(id)arg2 untilDate:(id)arg3 ;
-(id)allUsageMarkersWithTag:(unsigned)arg1 ;
-(id)lastHappenedWithTag:(unsigned)arg1 ;
-(id)usageMarkersWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 fromDate:(id)arg3 untilDate:(id)arg4 ;
-(id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2 ;
@end

