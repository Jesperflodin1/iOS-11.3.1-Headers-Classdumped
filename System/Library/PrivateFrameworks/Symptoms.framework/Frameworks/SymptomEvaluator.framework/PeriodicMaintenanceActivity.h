/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PeriodicMaintenanceActivity : NSObject {

	/*^block*/id _maintenanceBlocks;

}

@property (copy) id maintenanceBlocks;              //@synthesize maintenanceBlocks=_maintenanceBlocks - In the implementation block
+(id)sharedInstance;
+(id)activityQueue;
+(long long)periodicActivityInterval;
+(const char*)periodicActivityID;
-(id)init;
-(void)dealloc;
-(void)scheduleNextRunOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleActivityRun;
-(id)maintenanceBlocks;
-(void)setMaintenanceBlocks:(id)arg1 ;
@end
