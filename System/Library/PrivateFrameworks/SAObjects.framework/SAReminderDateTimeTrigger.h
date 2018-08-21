/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, SAReminderDateTimeTriggerOffset, NSString;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * offset; 
@property (nonatomic,retain) SAReminderDateTimeTriggerOffset * relativeTimeOffset; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)dateTimeTrigger;
+(id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)date;
-(SAReminderDateTimeTriggerOffset *)offset;
-(void)setOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(SAReminderDateTimeTriggerOffset *)relativeTimeOffset;
-(void)setRelativeTimeOffset:(SAReminderDateTimeTriggerOffset *)arg1 ;
@end

