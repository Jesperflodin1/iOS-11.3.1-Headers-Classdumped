/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSString;

@interface FMXPCTransactionManager : NSObject {

	NSObject*<OS_dispatch_queue> _txn_ops_queue;
	NSCountedSet* _activeTransactions;
	NSString* _keepAliveActivityIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> txn_ops_queue;              //@synthesize txn_ops_queue=_txn_ops_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * activeTransactions;                       //@synthesize activeTransactions=_activeTransactions - In the implementation block
@property (nonatomic,retain) NSString * keepAliveActivityIdentifier;                  //@synthesize keepAliveActivityIdentifier=_keepAliveActivityIdentifier - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initSingleton;
-(void)setTxn_ops_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveTransactions:(NSCountedSet *)arg1 ;
-(void)_disableLaunchOnRebootActivity:(id)arg1 ;
-(void)setKeepAliveActivityIdentifier:(NSString *)arg1 ;
-(void)_disableOldKeepAliveActivity;
-(NSObject*<OS_dispatch_queue>)txn_ops_queue;
-(NSCountedSet *)activeTransactions;
-(void)_enableKeepAlive;
-(void)_disableKeepAlive;
-(NSString *)keepAliveActivityIdentifier;
-(void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2 ;
-(void)beginTransaction:(id)arg1 ;
-(void)endTransaction:(id)arg1 ;
-(id)dumpActiveTransactions;
@end

