/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDObserverQueryServer : HDQueryServer {

	BOOL _deliverOnUnlock;
	NSNumber* _anchor;

}

@property (nonatomic,readonly) BOOL deliverOnUnlock;              //@synthesize deliverOnUnlock=_deliverOnUnlock - In the implementation block
@property (nonatomic,readonly) NSNumber * anchor;                 //@synthesize anchor=_anchor - In the implementation block
-(NSNumber *)anchor;
-(void)_queue_start;
-(id)requiredEntitlements;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_stop;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(BOOL)deliverOnUnlock;
@end

