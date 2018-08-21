/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallLogProKit/CallLogProKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, CAShapeLayer, UIImageView, FSCalendarEventIndicator, FSCalendar, FSCalendarAppearance, NSString, UIImage, UIColor, NSArray;

@interface FSCalendarCell : UICollectionViewCell {

	BOOL _placeholder;
	BOOL _dateIsToday;
	BOOL _weekend;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CAShapeLayer* _shapeLayer;
	UIImageView* _imageView;
	FSCalendarEventIndicator* _eventIndicator;
	FSCalendar* _calendar;
	FSCalendarAppearance* _appearance;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _image;
	unsigned long long _monthPosition;
	long long _numberOfEvents;
	UIColor* _preferredFillDefaultColor;
	UIColor* _preferredFillSelectionColor;
	UIColor* _preferredTitleDefaultColor;
	UIColor* _preferredTitleSelectionColor;
	UIColor* _preferredSubtitleDefaultColor;
	UIColor* _preferredSubtitleSelectionColor;
	UIColor* _preferredBorderDefaultColor;
	UIColor* _preferredBorderSelectionColor;
	NSArray* _preferredEventDefaultColors;
	NSArray* _preferredEventSelectionColors;
	double _preferredBorderRadius;
	CGPoint _preferredTitleOffset;
	CGPoint _preferredSubtitleOffset;
	CGPoint _preferredImageOffset;
	CGPoint _preferredEventOffset;

}

@property (nonatomic,readonly) UIColor * colorForCellFill; 
@property (nonatomic,readonly) UIColor * colorForTitleLabel; 
@property (nonatomic,readonly) UIColor * colorForSubtitleLabel; 
@property (nonatomic,readonly) UIColor * colorForCellBorder; 
@property (nonatomic,readonly) NSArray * colorsForEvents; 
@property (nonatomic,readonly) double borderRadius; 
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * shapeLayer;                              //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) FSCalendarEventIndicator * eventIndicator;              //@synthesize eventIndicator=_eventIndicator - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic,__weak) FSCalendar * calendar;                                  //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic,__weak) FSCalendarAppearance * appearance;                      //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long monthPosition;                              //@synthesize monthPosition=_monthPosition - In the implementation block
@property (assign,nonatomic) long long numberOfEvents;                                      //@synthesize numberOfEvents=_numberOfEvents - In the implementation block
@property (assign,nonatomic) BOOL dateIsToday;                                              //@synthesize dateIsToday=_dateIsToday - In the implementation block
@property (assign,nonatomic) BOOL weekend;                                                  //@synthesize weekend=_weekend - In the implementation block
@property (nonatomic,retain) UIColor * preferredFillDefaultColor;                           //@synthesize preferredFillDefaultColor=_preferredFillDefaultColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredFillSelectionColor;                         //@synthesize preferredFillSelectionColor=_preferredFillSelectionColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredTitleDefaultColor;                          //@synthesize preferredTitleDefaultColor=_preferredTitleDefaultColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredTitleSelectionColor;                        //@synthesize preferredTitleSelectionColor=_preferredTitleSelectionColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredSubtitleDefaultColor;                       //@synthesize preferredSubtitleDefaultColor=_preferredSubtitleDefaultColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredSubtitleSelectionColor;                     //@synthesize preferredSubtitleSelectionColor=_preferredSubtitleSelectionColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredBorderDefaultColor;                         //@synthesize preferredBorderDefaultColor=_preferredBorderDefaultColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredBorderSelectionColor;                       //@synthesize preferredBorderSelectionColor=_preferredBorderSelectionColor - In the implementation block
@property (assign,nonatomic) CGPoint preferredTitleOffset;                                  //@synthesize preferredTitleOffset=_preferredTitleOffset - In the implementation block
@property (assign,nonatomic) CGPoint preferredSubtitleOffset;                               //@synthesize preferredSubtitleOffset=_preferredSubtitleOffset - In the implementation block
@property (assign,nonatomic) CGPoint preferredImageOffset;                                  //@synthesize preferredImageOffset=_preferredImageOffset - In the implementation block
@property (assign,nonatomic) CGPoint preferredEventOffset;                                  //@synthesize preferredEventOffset=_preferredEventOffset - In the implementation block
@property (nonatomic,retain) NSArray * preferredEventDefaultColors;                         //@synthesize preferredEventDefaultColors=_preferredEventDefaultColors - In the implementation block
@property (nonatomic,retain) NSArray * preferredEventSelectionColors;                       //@synthesize preferredEventSelectionColors=_preferredEventSelectionColors - In the implementation block
@property (assign,nonatomic) double preferredBorderRadius;                                  //@synthesize preferredBorderRadius=_preferredBorderRadius - In the implementation block
-(void)configureAppearance;
-(void)performSelecting;
-(void)setDateIsToday:(BOOL)arg1 ;
-(void)setPreferredFillDefaultColor:(UIColor *)arg1 ;
-(void)setPreferredFillSelectionColor:(UIColor *)arg1 ;
-(void)setPreferredTitleDefaultColor:(UIColor *)arg1 ;
-(void)setPreferredTitleSelectionColor:(UIColor *)arg1 ;
-(void)setPreferredTitleOffset:(CGPoint)arg1 ;
-(void)setPreferredSubtitleDefaultColor:(UIColor *)arg1 ;
-(void)setPreferredSubtitleSelectionColor:(UIColor *)arg1 ;
-(void)setPreferredSubtitleOffset:(CGPoint)arg1 ;
-(void)setPreferredEventDefaultColors:(NSArray *)arg1 ;
-(void)setPreferredEventSelectionColors:(NSArray *)arg1 ;
-(void)setPreferredEventOffset:(CGPoint)arg1 ;
-(void)setPreferredBorderDefaultColor:(UIColor *)arg1 ;
-(void)setPreferredBorderSelectionColor:(UIColor *)arg1 ;
-(void)setPreferredBorderRadius:(double)arg1 ;
-(void)setPreferredImageOffset:(CGPoint)arg1 ;
-(void)setWeekend:(BOOL)arg1 ;
-(void)setMonthPosition:(unsigned long long)arg1 ;
-(unsigned long long)monthPosition;
-(BOOL)dateIsToday;
-(void)setEventIndicator:(FSCalendarEventIndicator *)arg1 ;
-(CGPoint)preferredTitleOffset;
-(CGPoint)preferredSubtitleOffset;
-(CGPoint)preferredImageOffset;
-(CGPoint)preferredEventOffset;
-(UIColor *)colorForTitleLabel;
-(UIColor *)colorForSubtitleLabel;
-(UIColor *)colorForCellBorder;
-(UIColor *)colorForCellFill;
-(NSArray *)colorsForEvents;
-(BOOL)weekend;
-(UIColor *)preferredFillSelectionColor;
-(id)colorForCurrentStateInDictionary:(id)arg1 ;
-(UIColor *)preferredFillDefaultColor;
-(UIColor *)preferredTitleSelectionColor;
-(UIColor *)preferredTitleDefaultColor;
-(UIColor *)preferredSubtitleSelectionColor;
-(UIColor *)preferredSubtitleDefaultColor;
-(FSCalendarEventIndicator *)eventIndicator;
-(UIColor *)preferredBorderDefaultColor;
-(UIColor *)preferredBorderSelectionColor;
-(NSArray *)preferredEventDefaultColors;
-(NSArray *)preferredEventSelectionColors;
-(double)preferredBorderRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(UIImage *)image;
-(FSCalendarAppearance *)appearance;
-(BOOL)isPlaceholder;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(CAShapeLayer *)shapeLayer;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setCalendar:(FSCalendar *)arg1 ;
-(FSCalendar *)calendar;
-(void)commonInit;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(double)borderRadius;
-(void)setNumberOfEvents:(long long)arg1 ;
-(long long)numberOfEvents;
-(void)setAppearance:(FSCalendarAppearance *)arg1 ;
@end

