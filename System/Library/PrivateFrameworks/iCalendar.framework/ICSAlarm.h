/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDateTimeUTCValue, NSArray, NSString, ICSTrigger, NSData, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent

@property (assign,nonatomic) int action; 
@property (nonatomic,retain) ICSDateTimeUTCValue * acknowledged; 
@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (retain) NSString * description; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * relatedTo; 
@property (nonatomic,retain) NSData * bookmark; 
@property (nonatomic,retain) NSString * x_wr_alarmuid; 
@property (nonatomic,retain) NSString * x_apple_proximity; 
@property (assign,nonatomic) BOOL x_apple_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_local_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_travel_default_alarm; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
+(id)name;
+(int)actionFromICSString:(id)arg1 ;
+(id)ICSStringFromAction:(int)arg1 ;
+(id)parseableDocumentFromICS:(id)arg1 ;
+(id)createNoneAlarm;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setAcknowledged:(ICSDateTimeUTCValue *)arg1 ;
-(ICSDateTimeUTCValue *)acknowledged;
-(void)fixAlarm;
-(BOOL)isNoneAlarm;
-(void)setX_apple_travel_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_travel_default_alarm;
-(void)setX_apple_local_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_local_default_alarm;
-(NSString *)x_wr_alarmuid;
-(BOOL)x_apple_default_alarm;
-(NSString *)relatedTo;
-(void)setX_apple_proximity:(NSString *)arg1 ;
-(void)setRelatedTo:(NSString *)arg1 ;
-(NSString *)x_apple_proximity;
-(NSData *)bookmark;
-(void)setBookmark:(NSData *)arg1 ;
-(void)setX_apple_default_alarm:(BOOL)arg1 ;
-(void)setX_wr_alarmuid:(NSString *)arg1 ;
@end

