/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CalDAVCalendarServerActionItem* _action;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;                            //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerActionItem * action;              //@synthesize action=_action - In the implementation block
-(id)init;
-(CalDAVCalendarServerActionItem *)action;
-(void)setAction:(CalDAVCalendarServerActionItem *)arg1 ;
-(id)copyParseRules;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)dtstamp;
@end

