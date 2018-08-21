/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSString, EKEventStore, EKCalendar, NSMutableArray;

@interface EKCalendarAccountTableViewController : UITableViewController {

	NSString* _currentSourceIdentifier;
	EKEventStore* _eventStore;
	EKCalendar* _calendar;

}

@property (__weak) EKEventStore * eventStore;                       //@synthesize eventStore=_eventStore - In the implementation block
@property (__weak) EKCalendar * calendar;                           //@synthesize calendar=_calendar - In the implementation block
@property (readonly) NSMutableArray * accounts; 
@property (retain) NSString * currentSourceIdentifier;              //@synthesize currentSourceIdentifier=_currentSourceIdentifier - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)initWithCalendar:(id)arg1 andStore:(id)arg2 ;
-(void)setCurrentSourceIdentifier:(NSString *)arg1 ;
-(NSString *)currentSourceIdentifier;
-(NSMutableArray *)accounts;
@end

