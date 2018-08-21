/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _relatedUniqueIdentifier;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)view;
-(id)dictionary;
-(NSString *)title;
-(id)eventFromStore:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(BOOL)arg3 ;
@end
