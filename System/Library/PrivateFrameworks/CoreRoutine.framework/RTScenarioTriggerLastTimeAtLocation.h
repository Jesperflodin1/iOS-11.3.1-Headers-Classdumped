/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTScenarioTrigger.h>

@class RTLocationOfInterest, NSDate;

@interface RTScenarioTriggerLastTimeAtLocation : RTScenarioTrigger {

	RTLocationOfInterest* _locationOfInterest;
	NSDate* _lastEntryDate;
	NSDate* _lastExitDate;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (nonatomic,readonly) NSDate * lastEntryDate;                                 //@synthesize lastEntryDate=_lastEntryDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastExitDate;                                  //@synthesize lastExitDate=_lastExitDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)lastExitDate;
-(RTLocationOfInterest *)locationOfInterest;
-(NSDate *)lastEntryDate;
-(id)initWithLocationOfInterest:(id)arg1 lastEntryDate:(id)arg2 lastExitDate:(id)arg3 ;
@end

