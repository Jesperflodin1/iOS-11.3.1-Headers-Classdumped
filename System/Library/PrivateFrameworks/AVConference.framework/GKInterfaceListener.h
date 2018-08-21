/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKInterfaceListener : NSObject {

	SCDynamicStoreRef _dynamicStore;
	opaque_pthread_mutex_t _notificationMutex;
	id _interfaceListenerDelegate;
	BOOL _isWifiUp;
	BOOL _isCellUp;
	int _notifyToken;
	BOOL _monitoringAvailable;

}

@property (assign) BOOL _isWifiUp;                                                       //@synthesize isWifiUp=_isWifiUp - In the implementation block
@property (assign) BOOL _isCellUp;                                                       //@synthesize isCellUp=_isCellUp - In the implementation block
@property (assign) id<InterfaceListenerDelegate> interfaceListenerDelegate; 
-(id)init;
-(void)dealloc;
-(void)set_isCellUp:(BOOL)arg1 ;
-(void)set_isWifiUp:(BOOL)arg1 ;
-(id<InterfaceListenerDelegate>)interfaceListenerDelegate;
-(BOOL)_isWifiUp;
-(BOOL)_isCellUp;
-(BOOL)stopChangeListener;
-(void)hasConnectionWithWifi:(BOOL*)arg1 cell:(BOOL*)arg2 ;
-(BOOL)startChangeListener;
-(BOOL)startRoutingChangeListener;
-(void)stopRoutingChangeListener;
-(void)setInterfaceListenerDelegate:(id<InterfaceListenerDelegate>)arg1 ;
@end

