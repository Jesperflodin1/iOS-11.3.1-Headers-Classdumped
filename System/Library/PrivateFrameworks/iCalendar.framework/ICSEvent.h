/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSCalendarItem.h>

@class NSArray, ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL, ICSStructuredLocation, ICSTravelDuration, ICSTravelAdvisoryBehavior;

@interface ICSEvent : ICSCalendarItem

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (readonly) BOOL isAllDay; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (assign) unsigned long long sequence; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * rrule; 
@property (assign) int status; 
@property (retain) NSString * summary; 
@property (assign,nonatomic) int transp; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (retain) NSString * x_apple_dropbox; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) BOOL x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign,nonatomic) int x_apple_ews_busystatus; 
@property (assign,nonatomic) BOOL x_apple_dontschedule; 
@property (assign) BOOL x_apple_ignore_on_restore; 
@property (assign,nonatomic) BOOL x_apple_needs_reply; 
@property (assign,nonatomic) BOOL x_wr_itipalreadysent; 
@property (assign,nonatomic) BOOL x_wr_itipstatusattendeeml; 
@property (assign,nonatomic) BOOL x_wr_itipstatusml; 
@property (assign,nonatomic) BOOL x_wr_rsvpneeded; 
@property (nonatomic,retain) NSArray * x_calendarserver_attendee_comment; 
@property (nonatomic,retain) NSString * x_calendarserver_private_comment; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (retain) ICSStructuredLocation * x_apple_travel_start; 
@property (retain) ICSTravelDuration * x_apple_travel_duration; 
@property (retain) ICSStructuredLocation * x_apple_end_location; 
@property (retain) ICSTravelAdvisoryBehavior * x_apple_travel_advisory_behavior; 
@property (assign) BOOL forcedAllDay; 
+(id)name;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(void)fixComponent;
-(void)fixAttendeeComments;
-(void)setX_calendarserver_attendee_comment:(NSArray *)arg1 ;
-(void)setX_apple_dontschedule:(BOOL)arg1 ;
-(BOOL)x_apple_dontschedule;
-(BOOL)x_apple_needs_reply;
-(void)setX_wr_itipalreadysent:(BOOL)arg1 ;
-(BOOL)x_wr_itipalreadysent;
-(void)setX_wr_itipstatusattendeeml:(BOOL)arg1 ;
-(BOOL)x_wr_itipstatusattendeeml;
-(void)setX_wr_itipstatusml:(BOOL)arg1 ;
-(BOOL)x_wr_itipstatusml;
-(void)setX_wr_rsvpneeded:(BOOL)arg1 ;
-(BOOL)x_wr_rsvpneeded;
-(int)x_apple_ews_busystatus;
-(void)setX_apple_ews_busystatus:(int)arg1 ;
-(BOOL)isDefaultAlarmDeleted;
-(int)transp;
-(NSString *)x_calendarserver_private_comment;
-(NSArray *)x_calendarserver_attendee_comment;
-(void)setX_apple_needs_reply:(BOOL)arg1 ;
-(void)setX_calendarserver_private_comment:(NSString *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setTransp:(int)arg1 ;
@end

