/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;

@end

