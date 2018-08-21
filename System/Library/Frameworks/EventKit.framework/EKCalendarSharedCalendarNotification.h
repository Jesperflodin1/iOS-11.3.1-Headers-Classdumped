/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	unsigned long long _sharingInvitationResponse;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;                     //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(id)calendarFromEventStore:(id)arg1 ;
-(unsigned long long)allowedEntityTypes;
@end

