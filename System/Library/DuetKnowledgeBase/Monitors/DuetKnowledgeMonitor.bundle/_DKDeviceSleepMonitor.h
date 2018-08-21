/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKNotificationReceiver.h>

@class NSString;

@interface _DKDeviceSleepMonitor : _DKMonitor <_DKNotificationReceiver> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setIsAwake:(BOOL)arg1 ;
+(id)_eventWithMessage:(long long)arg1 ;
+(id)eventStream;
+(id)entitlements;
-(void)stop;
-(void)start;
-(void)receiveNotificationEvent:(id)arg1 ;
@end

