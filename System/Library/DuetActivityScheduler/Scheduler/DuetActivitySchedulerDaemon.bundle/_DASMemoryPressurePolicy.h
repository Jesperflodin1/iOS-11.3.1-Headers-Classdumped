/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@class NSString, NSArray;

@interface _DASMemoryPressurePolicy : NSObject <_DASActivityPolicy> {

	NSString* _policyName;
	NSArray* _triggers;

}

@property (nonatomic,retain) NSString * policyName;                 //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                    //@synthesize triggers=_triggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSString *)policyName;
-(BOOL)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(long long)memoryPressureLevelWithContext:(id)arg1 ;
-(void)setPolicyName:(NSString *)arg1 ;
-(id)init;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

