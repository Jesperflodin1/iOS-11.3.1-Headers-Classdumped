/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSSet, NSObject;

@interface _DASComplicationManager : NSObject {

	NSSet* _activeComplications;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _complicationQueue;

}

@property (nonatomic,retain) NSSet * activeComplications;                                 //@synthesize activeComplications=_activeComplications - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> complicationQueue;              //@synthesize complicationQueue=_complicationQueue - In the implementation block
+(BOOL)watchIsPaired;
+(id)obtainActiveComplications;
+(id)sharedInstance;
-(void)setComplicationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerForComplicationChangeNotifications;
-(NSObject*<OS_dispatch_queue>)complicationQueue;
-(BOOL)isActiveComplication:(id)arg1 ;
-(BOOL)isAnyActiveComplication:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setActiveComplications:(NSSet *)arg1 ;
-(NSSet *)activeComplications;
@end

