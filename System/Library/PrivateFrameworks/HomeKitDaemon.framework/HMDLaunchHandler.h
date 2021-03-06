/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface HMDLaunchHandler : HMFObject {

	int _beingConfigured;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableSet* _relaunchTriggeringClients;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * relaunchTriggeringClients;               //@synthesize relaunchTriggeringClients=_relaunchTriggeringClients - In the implementation block
@property (assign,nonatomic) int beingConfigured;                                    //@synthesize beingConfigured=_beingConfigured - In the implementation block
+(id)sharedHandler;
-(id)init;
-(void)registerForRelaunch:(id)arg1 ;
-(void)deregisterForRelaunch:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(int)beingConfigured;
-(void)setBeingConfigured:(int)arg1 ;
-(void)beingConfigured:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_saveAssertionPlist;
-(void)_reevaluate;
-(NSMutableSet *)relaunchTriggeringClients;
-(void)_removeAssertionPlist;
-(void)setRelaunchTriggeringClients:(NSMutableSet *)arg1 ;
@end

