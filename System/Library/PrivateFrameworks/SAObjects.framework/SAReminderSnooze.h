/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAReminderDateTimeTriggerOffset, NSArray;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,copy) NSArray * reminderIdentifierList; 
+(id)snooze;
+(id)snoozeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAReminderDateTimeTriggerOffset *)offset;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)reminderIdentifierList;
-(void)setReminderIdentifierList:(NSArray *)arg1 ;
@end

