/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CUPowerSourceMonitor : NSObject {

	BOOL _activateCalled;
	NSMutableDictionary* _aggregateSources;
	NSMutableDictionary* _pendingAggregates;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourceFoundHandler;
	/*^block*/id _powerSourceLostHandler;
	/*^block*/id _powerSourceChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourceFoundHandler;                                //@synthesize powerSourceFoundHandler=_powerSourceFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourceLostHandler;                                 //@synthesize powerSourceLostHandler=_powerSourceLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourceChangedHandler;                              //@synthesize powerSourceChangedHandler=_powerSourceChangedHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)_update;
-(void)_cleanup;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_aggregatePowerSourceFound:(id)arg1 ;
-(void)_aggregatePowerSourceLost:(id)arg1 ;
-(void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updatePowerSources;
-(void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2 ;
-(void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(id)powerSourceFoundHandler;
-(id)powerSourceLostHandler;
-(id)powerSourceChangedHandler;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setPowerSourceFoundHandler:(id)arg1 ;
-(void)setPowerSourceChangedHandler:(id)arg1 ;
-(void)setPowerSourceLostHandler:(id)arg1 ;
-(unsigned)changeFlags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
@end

