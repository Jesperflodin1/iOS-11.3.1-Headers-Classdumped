/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;

}
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
@end

