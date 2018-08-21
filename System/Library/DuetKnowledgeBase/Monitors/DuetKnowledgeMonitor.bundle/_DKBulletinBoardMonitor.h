/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/BBObserverDelegate.h>

@class BBObserver, NSString;

@interface _DKBulletinBoardMonitor : _DKMonitor <BBObserverDelegate> {

	BBObserver* _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithBundle:(id)arg1 title:(id)arg2 subtitle:(id)arg3 message:(id)arg4 feed:(id)arg5 ;
+(id)eventStream;
+(id)entitlements;
-(id)init;
-(void)stop;
-(void)start;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
@end

