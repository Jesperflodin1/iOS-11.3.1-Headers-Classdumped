/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSDate, NSObject, HMFMessageDispatcher, HMDHome, NSMutableArray, HMDApplicationData, NSArray, NSSet;

@interface HMDActionSet : HMFObject <HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol> {

	BOOL _executionInProgress;
	NSString* _name;
	NSString* _type;
	NSUUID* _uuid;
	NSDate* _lastExecutionDate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHome* _home;
	NSMutableArray* _currentActions;
	HMDApplicationData* _appData;

}

@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentActions;                                 //@synthesize currentActions=_currentActions - In the implementation block
@property (nonatomic,retain) NSDate * lastExecutionDate;                                      //@synthesize lastExecutionDate=_lastExecutionDate - In the implementation block
@property (assign,nonatomic) BOOL executionInProgress;                                        //@synthesize executionInProgress=_executionInProgress - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)isBuiltinActionSetType:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)actions;
-(id)url;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSUUID *)uuid;
-(void)execute:(id)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(void)executeWithTriggerSource:(id)arg1 captureCurrentState:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleRenameRequest:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)removeAccessory:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(BOOL)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(NSDate *)lastExecutionDate;
-(void)setLastExecutionDate:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5 ;
-(id)messageDestination;
-(void)removeActionForCharacteristic:(id)arg1 ;
-(BOOL)containsSecureCharacteristic;
-(id)assistantObject;
-(BOOL)containsUnsecuringAction;
-(void)_execute:(id)arg1 captureCurrentState:(BOOL)arg2 writeRequestTuples:(id)arg3 ;
-(void)_handleRemoveAction:(id)arg1 message:(id)arg2 ;
-(BOOL)_fixupActions;
-(NSMutableArray *)currentActions;
-(BOOL)executionInProgress;
-(void)_handleAddActionRequest:(id)arg1 ;
-(void)_handleRemoveActionRequest:(id)arg1 ;
-(void)_handleReplaceActionValueRequest:(id)arg1 ;
-(id)actionWithUUID:(id)arg1 ;
-(void)_removeAction:(id)arg1 message:(id)arg2 ;
-(void)_logDuetRoomEvent;
-(NSString *)serializedIdentifier;
-(void)setExecutionInProgress:(BOOL)arg1 ;
-(id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)_logDuetEvent:(id)arg1 endDate:(id)arg2 message:(id)arg3 ;
-(void)_executeWriteAction:(id)arg1 captureCurrentState:(BOOL)arg2 writeRequestTuples:(id)arg3 ;
-(void)_issueReadRequests:(id)arg1 ;
-(void)_issueWriteRequests:(id)arg1 readResponse:(id)arg2 message:(id)arg3 ;
-(id)_logExecuteAction:(id)arg1 ;
-(void)handleExecutionCompleted:(id)arg1 startDate:(id)arg2 error:(id)arg3 readResponse:(id)arg4 response:(id)arg5 ;
-(void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2 ;
-(void)_handleAddActionTransaction:(id)arg1 message:(id)arg2 ;
-(void)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2 ;
-(id)allCharacteristicsInActionsForServices:(id)arg1 ;
-(void)setCurrentActions:(NSMutableArray *)arg1 ;
@end

