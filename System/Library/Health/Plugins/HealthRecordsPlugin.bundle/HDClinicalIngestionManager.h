/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue, HDClinicalIngestionManagerDelegate;
@class HDHealthRecordsPlugin, HDProfile, NSObject, NSOperationQueue, NSString;

@interface HDClinicalIngestionManager : NSObject <HDHealthDaemonReadyObserver> {

	HDHealthRecordsPlugin* _plugin;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _ingestionOperationQueue;
	long long _inFlightTaskCount;
	id<HDClinicalIngestionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HDClinicalIngestionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long periodicIngestionFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)badgeForNewHealthRecords;
-(void)notifyForNewHealthRecords;
-(void)performIngestionWithContext:(id)arg1 accountIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)periodicIngestionFrequency;
-(void)setPeriodicIngestionFrequency:(long long)arg1 ;
-(void)_setUpPeriodicIngestionWithFrequency:(long long)arg1 ;
-(void)_addIngestionTask:(id)arg1 ;
-(void)_taskDidFinish:(id)arg1 ;
-(void)taskWillReallyBegin;
-(id)_periodicIngestionCriteriaWithPreviousCriteria:(id)arg1 frequency:(long long)arg2 ;
-(void)_performPeriodicIngestionForFrequency:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPlugin:(id)arg1 profile:(id)arg2 ;
-(void)addIngestionTask:(id)arg1 ;
-(id<HDClinicalIngestionManagerDelegate>)delegate;
-(void)setDelegate:(id<HDClinicalIngestionManagerDelegate>)arg1 ;
-(void)daemonReady:(id)arg1 ;
@end

