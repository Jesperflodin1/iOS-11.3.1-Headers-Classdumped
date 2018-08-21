/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/GKNATObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;
@class NSRecursiveLock, NSMutableDictionary, NSObject, GKNATObserver_SCContext;

@interface GKNATObserverInternal : GKNATObserver {

	id _delegate;
	SCDynamicStoreRef _dynamicStore;
	NSRecursiveLock* _xNATCheck;
	int _lastReportedNATType;
	int _lastReportedCarrierNATType;
	int _lastReportedNonCarrierNATType;
	NSMutableDictionary* _interfaceInfoDictionary;
	BOOL _nonCarrierInterfacesOnly;
	BOOL _checkTCPAndSSL;
	BOOL _favorNonCarrier;
	BOOL _newCarrierType;
	BOOL _addInRangeFlag;
	BOOL _addCarrierFlag;
	BOOL _ignoreNatTypeCache;
	BOOL _ignoreCarrierBundle;
	int _NATCheckRetryCount;
	double _NATCheckRetryDelay;
	NSMutableDictionary* _currentNetworkNames;
	NSObject*<OS_dispatch_queue> _natCheckQueue;
	NSObject*<OS_dispatch_queue> _reportNATQueue;
	NSObject*<OS_dispatch_group> _natCheckGroup;
	NSObject*<OS_dispatch_semaphore> _natCheckNetNameSema;
	BOOL _fNATCheckQueued;
	BOOL _fNATCheckInProgress;
	GKNATObserver_SCContext* _sccontext;
	BOOL _hasNATCheckStarted;
	BOOL _hasNATCheckEnded;

}
-(id)init;
-(oneway void)release;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(int)currentNATType;
-(void)clearRetries;
-(void)tryNATCheckWithDelay:(double)arg1 ;
-(void)shouldTryNATCheck;
-(void)registerForNetworkChanges;
-(unsigned)setFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 isCachedKey:(id)arg4 mask:(unsigned)arg5 ;
-(int)natTypeForCommNATFlags:(unsigned)arg1 isCarrier:(BOOL)arg2 ;
-(void)calculateSummmaryNATType:(int*)arg1 andCarrierNATType:(int*)arg2 andNonCarrierNATType:(int*)arg3 copyInterfaceInfoDictionary:(id*)arg4 ;
-(void)reportNATType;
-(BOOL)ensureNatCachePathExists;
-(void)updateNatTypeCache_CachePlistScheme:(id)arg1 ;
-(id)copyNatTypeCachePlistScheme;
-(id)copyNatTypeCache;
-(void)updateNatTypeCache:(id)arg1 ;
-(id)nameForNetworkWithIPPort:(tagIPPORT*)arg1 interfaceName:(id)arg2 ;
-(id)lookupCachedNATFlagsForNetwork:(id)arg1 ;
-(unsigned)setCommNATFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(unsigned)setTCPFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(unsigned)setSSLFlags:(unsigned)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 ;
-(tagCommNATInfo*)callCommNATTestFromIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK14*)arg2 ;
-(void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2 ;
-(int)callHTTPTestFromIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK14*)arg2 ToServer:(id)arg3 isSSL:(BOOL)arg4 ;
-(void)NATCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK14*)arg2 useCache:(BOOL)arg3 ;
-(void)HTTPCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK14*)arg2 useCache:(BOOL)arg3 ;
-(void)HTTPSCheckWithIPPort:(tagIPPORT*)arg1 ipv6Prefix:(const SCD_Struct_GK14*)arg2 useCache:(BOOL)arg3 ;
-(id)copyNatTypeCache_OSXGamedScheme;
-(void)updateNatTypeCache_OSXGamedScheme:(id)arg1 ;
@end

