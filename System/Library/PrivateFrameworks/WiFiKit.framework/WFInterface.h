/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, WFIPMonitor, NSSet, WFNetworkScanRecord, NSObject, NSOperationQueue, NSArray, NSNumber, NSThread, NSRunLoop;

@interface WFInterface : NSObject {

	BOOL _deviceSupportsWAPI;
	BOOL _deviceSupportsHS20;
	BOOL _ipv4SelfAssigned;
	BOOL _hasNoGatewayIP;
	BOOL _currentNetworkIsDirected;
	BOOL _monitoringEvents;
	BOOL _scanning;
	int _ipState;
	NSString* _interfaceName;
	WFIPMonitor* _ipMonitor;
	NSSet* _currentNetworkIssues;
	WFNetworkScanRecord* _currentNetwork;
	NSObject*<OS_dispatch_queue> _currentNetworkQueue;
	NSObject*<OS_dispatch_queue> _scanQueueDispatchQueue;
	WiFiDeviceClientRef _device;
	NSOperationQueue* _gasQueue;
	NSOperationQueue* _scanQueue;
	NSOperationQueue* _joinQueue;
	NSArray* _deviceScanChannels;
	NSNumber* _rssiThreshold;
	NSThread* _callbackThread;
	NSRunLoop* _callbackRunLoop;

}

@property (nonatomic,retain) NSSet * currentNetworkIssues;                                     //@synthesize currentNetworkIssues=_currentNetworkIssues - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * currentNetwork;                             //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                          //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> currentNetworkQueue;                 //@synthesize currentNetworkQueue=_currentNetworkQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scanQueueDispatchQueue;              //@synthesize scanQueueDispatchQueue=_scanQueueDispatchQueue - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                                       //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSOperationQueue * gasQueue;                                      //@synthesize gasQueue=_gasQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * scanQueue;                                     //@synthesize scanQueue=_scanQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * joinQueue;                                     //@synthesize joinQueue=_joinQueue - In the implementation block
@property (nonatomic,retain) NSArray * deviceScanChannels;                                     //@synthesize deviceScanChannels=_deviceScanChannels - In the implementation block
@property (assign,nonatomic) NSNumber * rssiThreshold;                                         //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign) BOOL deviceSupportsWAPI;                                                    //@synthesize deviceSupportsWAPI=_deviceSupportsWAPI - In the implementation block
@property (assign) BOOL deviceSupportsHS20;                                                    //@synthesize deviceSupportsHS20=_deviceSupportsHS20 - In the implementation block
@property (assign,nonatomic) int ipState;                                                      //@synthesize ipState=_ipState - In the implementation block
@property (assign,nonatomic) BOOL ipv4SelfAssigned;                                            //@synthesize ipv4SelfAssigned=_ipv4SelfAssigned - In the implementation block
@property (assign,nonatomic) BOOL hasNoGatewayIP;                                              //@synthesize hasNoGatewayIP=_hasNoGatewayIP - In the implementation block
@property (assign,nonatomic) BOOL currentNetworkIsDirected;                                    //@synthesize currentNetworkIsDirected=_currentNetworkIsDirected - In the implementation block
@property (nonatomic,retain) NSThread * callbackThread;                                        //@synthesize callbackThread=_callbackThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * callbackRunLoop;                                      //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (assign) BOOL monitoringEvents;                                                      //@synthesize monitoringEvents=_monitoringEvents - In the implementation block
@property (assign) BOOL scanning;                                                              //@synthesize scanning=_scanning - In the implementation block
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)deviceSupportsWAPI;
-(void)setRssiThreshold:(NSNumber *)arg1 ;
-(NSNumber *)rssiThreshold;
-(WiFiDeviceClientRef)device;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(id)filterScanResultsForRestrictedNetworks:(id)arg1 ;
-(void)asyncCurrentNetwork:(/*^block*/id)arg1 ;
-(WFNetworkScanRecord *)currentNetwork;
-(void)setScanning:(BOOL)arg1 ;
-(BOOL)supportsHS20;
-(NSArray *)deviceScanChannels;
-(void)asyncScanRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)asyncAssociateToNetwork:(id)arg1 password:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)asyncAssociateToNetwork:(id)arg1 profile:(id)arg2 reply:(/*^block*/id)arg3 ;
-(WFIPMonitor *)ipMonitor;
-(void)disassociateFromCurrentNetwork;
-(NSSet *)currentNetworkIssues;
-(void)disassociateFromCarPlayUserConfiguredNetwork;
-(BOOL)ipv4SelfAssigned;
-(void)_startMonitoringWiFiEvents;
-(void)_updateCurrentNetworkWithNetwork:(WiFiNetworkRef)arg1 callback:(/*^block*/id)arg2 ;
-(void)_stopMonitoringWiFiEvents;
-(BOOL)monitoringEvents;
-(void)setMonitoringEvents:(BOOL)arg1 ;
-(void)_wifiManagerRestarted:(id)arg1 ;
-(BOOL)scanning;
-(NSOperationQueue *)joinQueue;
-(void)_updateDeviceProperties;
-(id)_debugLQMString:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)currentNetworkQueue;
-(void)_resetCurrentNetworkStates;
-(void)_currentNetworkDidChange;
-(BOOL)_isNetworkRestrictionActive;
-(void)_wifiScanComplete:(id)arg1 error:(int)arg2 ;
-(NSOperationQueue *)gasQueue;
-(void)_startScanOperation:(id)arg1 ;
-(void)_linkChangedWithInfo:(id)arg1 ;
-(void)_linkQualityChanged:(id)arg1 ;
-(void)asyncGASQueryForNetworks:(id)arg1 elements:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)supportsWAPI;
-(void)notifyNoNetworksFound;
-(void)_hostAPStateDidChange:(id)arg1 ;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(void)setCurrentNetworkIssues:(NSSet *)arg1 ;
-(void)setCurrentNetworkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)scanQueueDispatchQueue;
-(void)setScanQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGasQueue:(NSOperationQueue *)arg1 ;
-(void)setJoinQueue:(NSOperationQueue *)arg1 ;
-(void)setDeviceScanChannels:(NSArray *)arg1 ;
-(void)setDeviceSupportsWAPI:(BOOL)arg1 ;
-(BOOL)deviceSupportsHS20;
-(void)setDeviceSupportsHS20:(BOOL)arg1 ;
-(int)ipState;
-(void)setIpState:(int)arg1 ;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(BOOL)hasNoGatewayIP;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(BOOL)currentNetworkIsDirected;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(NSThread *)callbackThread;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(id)initWithDevice:(WiFiDeviceClientRef)arg1 ;
-(void)finalize;
-(NSOperationQueue *)scanQueue;
-(void)setScanQueue:(NSOperationQueue *)arg1 ;
@end

