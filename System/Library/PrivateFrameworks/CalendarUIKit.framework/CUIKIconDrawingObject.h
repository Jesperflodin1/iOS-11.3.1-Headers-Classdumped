/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSCalendar, NSString, UIFont;

@interface CUIKIconDrawingObject : NSObject {

	NSCalendar* _calendar;
	NSString* _dayNumber;
	/*^block*/id _dateNameBlock;
	long long _dateNameFormatType;
	long long _format;
	UIFont* _dateNameFont;
	CGSize _canvasSize;

}

@property (retain) NSCalendar * calendar;                                          //@synthesize calendar=_calendar - In the implementation block
@property (copy) NSString * dayNumber;                                             //@synthesize dayNumber=_dayNumber - In the implementation block
@property (copy) id dateNameBlock;                                                 //@synthesize dateNameBlock=_dateNameBlock - In the implementation block
@property (assign) long long dateNameFormatType;                                   //@synthesize dateNameFormatType=_dateNameFormatType - In the implementation block
@property (assign) CGSize canvasSize;                                              //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign) long long format;                                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) UIFont * dayNumberFont; 
@property (nonatomic,readonly) double dayNumberBaselineVerticalInset; 
@property (nonatomic,readonly) double dayNumberTrackingValue; 
@property (nonatomic,readonly) UIFont * dateNameFont;                              //@synthesize dateNameFont=_dateNameFont - In the implementation block
@property (nonatomic,readonly) double dateNameBaselineVerticalInset; 
@property (nonatomic,readonly) double dateNameHorizontalInset; 
@property (nonatomic,readonly) double minFullDateNameFontScale; 
@property (nonatomic,readonly) double minDateNameFontScale; 
@property (nonatomic,readonly) double minDateNameLetterSpacing; 
+(id)colorForDayOfWeek;
+(id)countriesRequiringBlackDayOfWeek;
+(BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1 ;
+(id)_dateNamesForDateFormatter:(id)arg1 type:(long long)arg2 ;
+(id)_dateNamesForCalendar:(id)arg1 type:(long long)arg2 ;
-(long long)format;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)setDateNameBlock:(id)arg1 ;
-(void)setDateNameFormatType:(long long)arg1 ;
-(void)_drawDayNumber;
-(void)_drawDateName;
-(void)_drawDayNumberForHomeScreenStyledIcon;
-(void)_drawDayNumberForNotificationIcon;
-(double)dayNumberBaselineVerticalInset;
-(double)dateNameBaselineVerticalInset;
-(double)dayNumberTrackingValue;
-(id)dateNameBlock;
-(long long)dateNameFormatType;
-(id)dateNameFont:(id)arg1 ;
-(double)minFullDateNameFontScale;
-(double)minDateNameLetterSpacing;
-(double)dateNameHorizontalInset;
-(double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(CGSize)arg5 ;
-(double)minDateNameFontScale;
-(id)dateNameFont:(id)arg1 size:(double)arg2 ;
-(id)_systemG2FromFont:(id)arg1 ;
-(BOOL)_shouldUseJ207SmallerFont:(id)arg1 ;
-(double)dateNameFontSizeForName:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(/*^block*/id)arg3 dateNameFormatType:(long long)arg4 canvasSize:(CGSize)arg5 format:(long long)arg6 ;
-(UIFont *)dateNameFont;
-(UIFont *)dayNumberFont;
-(void)draw;
-(void)setFormat:(long long)arg1 ;
-(void)setDayNumber:(NSString *)arg1 ;
-(NSString *)dayNumber;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
@end

