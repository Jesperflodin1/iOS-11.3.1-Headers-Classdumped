/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/IDSServiceDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface _DKWatchActiveMonitor : _DKMonitor <IDSServiceDelegatePrivate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> idsServiceQueue;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithWatchActive:(BOOL)arg1 deviceID:(id)arg2 ;
+(id)eventStream;
-(void)checkDevices:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
@end

