/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NWAppStateEventListenerDelegate, NWAppRegistrationEventDelegate;
@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSObject;

@interface NWAppEventListener : NSObject {

	BKSApplicationStateMonitor* appStateMonitor;
	FBSDisplayLayoutMonitor* displayLayoutMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	id<NWAppStateEventListenerDelegate> _appStateDelegate;
	id<NWAppRegistrationEventDelegate> _appRegistrationDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<NWAppStateEventListenerDelegate> appStateDelegate;                    //@synthesize appStateDelegate=_appStateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NWAppRegistrationEventDelegate> appRegistrationDelegate;              //@synthesize appRegistrationDelegate=_appRegistrationDelegate - In the implementation block
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_applicationStateMonitorInit;
-(void)startObservingLaunchServices;
-(void)stopObservingLaunchServices;
-(void)handleLaunchServicesApplicationRegistration:(id)arg1 ;
-(void)handleLaunchServicesApplicationUnregistration:(id)arg1 ;
-(id<NWAppRegistrationEventDelegate>)appRegistrationDelegate;
-(id<NWAppStateEventListenerDelegate>)appStateDelegate;
-(void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned)arg4 ;
-(void)setAppStateDelegate:(id<NWAppStateEventListenerDelegate>)arg1 ;
-(void)setAppRegistrationDelegate:(id<NWAppRegistrationEventDelegate>)arg1 ;
@end

