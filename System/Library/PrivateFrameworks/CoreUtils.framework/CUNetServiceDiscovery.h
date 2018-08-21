/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class SFService, SFDeviceDiscovery, NSString, CUBonjourBrowser, CUNANSubscriber, NSSet, NSObject;

@interface CUNetServiceDiscovery : NSObject {

	BOOL _activated;
	unsigned char _bleActionType;
	SFService* _bleAdvertiser;
	NSMutableDictionary* _bleDevices;
	SFDeviceDiscovery* _bleDiscovery;
	NSString* _bleServiceIdentifier;
	NSMutableDictionary* _endpoints;
	CUBonjourBrowser* _infraBonjourBrowser;
	NSMutableDictionary* _infraBonjourDevices;
	unsigned _infraBonjourBrowserID;
	NSMutableDictionary* _nanEndpoints;
	CUNANSubscriber* _nanSubscriber;
	unsigned _nanSubscriberID;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	BOOL _updatePending;
	BOOL _blePeerFilterChanged;
	BOOL _serviceTypeChanged;
	int _awdlControl;
	unsigned _bleDiscoveryFlags;
	unsigned _changeFlags;
	int _infraControl;
	int _nanControl;
	NSSet* _blePeerFilter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _serviceType;
	/*^block*/id _endpointFoundHandler;
	/*^block*/id _endpointLostHandler;
	/*^block*/id _endpointChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) int awdlControl;                                         //@synthesize awdlControl=_awdlControl - In the implementation block
@property (assign,nonatomic) unsigned bleDiscoveryFlags;                              //@synthesize bleDiscoveryFlags=_bleDiscoveryFlags - In the implementation block
@property (nonatomic,copy) NSSet * blePeerFilter;                                     //@synthesize blePeerFilter=_blePeerFilter - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int infraControl;                                        //@synthesize infraControl=_infraControl - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int nanControl;                                          //@synthesize nanControl=_nanControl - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id endpointFoundHandler;                                   //@synthesize endpointFoundHandler=_endpointFoundHandler - In the implementation block
@property (nonatomic,copy) id endpointLostHandler;                                    //@synthesize endpointLostHandler=_endpointLostHandler - In the implementation block
@property (nonatomic,copy) id endpointChangedHandler;                                 //@synthesize endpointChangedHandler=_endpointChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateLocked;
-(id)endpointFoundHandler;
-(void)setEndpointFoundHandler:(id)arg1 ;
-(id)endpointLostHandler;
-(void)setEndpointLostHandler:(id)arg1 ;
-(id)endpointChangedHandler;
-(void)setEndpointChangedHandler:(id)arg1 ;
-(void)setAwdlControl:(int)arg1 ;
-(void)setBlePeerFilter:(NSSet *)arg1 ;
-(void)setInfraControl:(int)arg1 ;
-(void)setNanControl:(int)arg1 ;
-(void)_bleTriggerEnsureStarted;
-(void)_bleTriggerEnsureStopped;
-(void)_bleTriggerDeviceFound:(id)arg1 ;
-(void)_bleTriggerDeviceLost:(id)arg1 ;
-(int)awdlControl;
-(NSSet *)blePeerFilter;
-(int)infraControl;
-(int)nanControl;
-(void)_bleScannerEnsureStarted;
-(void)_bleScannerEnsureStopped;
-(void)_infraBonjourBrowserEnsureStarted;
-(void)_infraBonjourBrowserEnsureStopped;
-(void)_infraBonjourDeviceFound:(id)arg1 ;
-(void)_infraBonjourDeviceLost:(id)arg1 ;
-(void)_infraBonjourDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_nanSubscriberEnsureStarted;
-(void)_nanSubscriberEnsureStopped;
-(void)_nanEndpointFound:(id)arg1 ;
-(void)_nanEndpointLost:(id)arg1 ;
-(void)_nanEndpointChanged:(id)arg1 changes:(unsigned)arg2 ;
-(unsigned)bleDiscoveryFlags;
-(void)setBleDiscoveryFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
@end

