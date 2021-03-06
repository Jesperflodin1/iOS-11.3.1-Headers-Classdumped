/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWEntityMapperLaunchServices, NWEntityMapperCoalitionWatcher, NWEntityMapperStaticAssignment, NWEntityMapperNEHelper, NWEntityMapperDynamicLaunchServices, NWEntityMapperProcessWatcher, NSSet, NSMutableDictionary, NWAppEventListener, AppStateHandler;

@interface NWUsageMonitor : NSObject {

	NWEntityMapperLaunchServices* _launchServicesUUIDMapper;
	NWEntityMapperCoalitionWatcher* _coalitionUUIDMapper;
	NWEntityMapperStaticAssignment* _staticAssignmentSymptomsUUIDMapper;
	NWEntityMapperStaticAssignment* _staticAssignmentCommCenterUUIDMapper;
	NWEntityMapperNEHelper* _neHelperUUIDMapper;
	NWEntityMapperDynamicLaunchServices* _dynamicLaunchServicesUUIDMapper;
	NWEntityMapperProcessWatcher* _processWatcherUUIDMapper;
	BOOL _useSymptomsMapping;
	BOOL _useNEHelper;
	BOOL _useDynamicLaunchServices;
	BOOL _useCoalitionIDs;
	BOOL _useProcessNames;
	NSSet* _useNEHelperSet;
	NSSet* _knownDaemonSet;
	NSMutableDictionary* _reportedLookupFailures;
	NWAppEventListener* _appEventListener;
	AppStateHandler* _appStateHandler;
	BOOL _debugMode;

}

@property (readonly) BOOL debugMode;              //@synthesize debugMode=_debugMode - In the implementation block
+(void)initialize;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)debugMode;
-(id)stateDictionary;
-(void)configure:(id)arg1 ;
-(BOOL)hasAnyForegroundApp;
-(id)foregroundAppKeys;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(id)bestIdentifierForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char*)arg5 derivation:(int*)arg6 ;
-(id)allIdentifiersForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char*)arg5 ;
-(unsigned)currentStateForProcessWithPid:(int)arg1 ;
-(void)noteFailedLookupFor:(id)arg1 processName:(char*)arg2 pid:(int)arg3 ;
-(id)processNameForUUID:(id)arg1 ;
-(id)processNameForUUIDString:(id)arg1 ;
-(void)noteUUID:(id)arg1 forPid:(int)arg2 procname:(char*)arg3 ;
@end

