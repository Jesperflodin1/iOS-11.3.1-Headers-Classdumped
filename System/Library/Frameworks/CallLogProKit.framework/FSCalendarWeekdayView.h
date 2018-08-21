/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallLogProKit/CallLogProKit-Structs.h>
#import <UIKit/UIView.h>

@class NSPointerArray, UIView, FSCalendar, NSArray;

@interface FSCalendarWeekdayView : UIView {

	NSPointerArray* _weekdayPointers;
	UIView* _contentView;
	FSCalendar* _calendar;

}

@property (nonatomic,retain) NSPointerArray * weekdayPointers;              //@synthesize weekdayPointers=_weekdayPointers - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) FSCalendar * calendar;                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSArray * weekdayLabels; 
-(void)configureAppearance;
-(NSPointerArray *)weekdayPointers;
-(NSArray *)weekdayLabels;
-(void)setWeekdayPointers:(NSPointerArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)initWithCoder:(id)arg1 ;
-(void)setCalendar:(FSCalendar *)arg1 ;
-(FSCalendar *)calendar;
-(void)commonInit;
@end

