/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, EKDayPreviewController, EKEvent, NSDate;

@interface EKEventPreviewDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	EKDayPreviewController* _containedDayViewController;
	EKEvent* _eventCopy;
	BOOL _showsInlineDayView;
	BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
	NSDate* _proposedTime;

}

@property (assign,nonatomic) BOOL showsInlineDayView;                                        //@synthesize showsInlineDayView=_showsInlineDayView - In the implementation block
@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;              //@synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter - In the implementation block
@property (nonatomic,retain) NSDate * proposedTime;                                          //@synthesize proposedTime=_proposedTime - In the implementation block
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(NSDate *)proposedTime;
-(void)setProposedTime:(NSDate *)arg1 ;
-(BOOL)showsInlineDayView;
-(id)_dayPreviewViewController;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(void)setShowsInlineDayView:(BOOL)arg1 ;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
@end

