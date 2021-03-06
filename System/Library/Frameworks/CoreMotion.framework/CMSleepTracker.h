/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject {

	CMSpringTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSpringTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMSpringTrackerInternal *)_internal;
-(id)init;
-(void)dealloc;
-(BOOL)isTracking;
-(void)startWithHandler:(/*^block*/id)arg1 ;
-(void)stopWithHandler:(/*^block*/id)arg1 ;
-(void)querySleepDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

