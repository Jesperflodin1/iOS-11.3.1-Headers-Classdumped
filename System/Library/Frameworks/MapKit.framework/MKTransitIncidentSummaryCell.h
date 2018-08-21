/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class _MKUILabel, UIImageView, NSLayoutConstraint, NSDate, NSString, UIImage;

@interface MKTransitIncidentSummaryCell : MKTableViewCell {

	_MKUILabel* _titleLabel;
	_MKUILabel* _summaryLabel;
	_MKUILabel* _startedLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _titleToTopConstraint;
	NSLayoutConstraint* _summaryToTitleConstraint;
	NSLayoutConstraint* _startedToSummaryConstraint;
	NSDate* _startDate;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
-(NSString *)summary;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setConstraints;
-(void)_updateStartLabel;
-(NSDate *)startDate;
-(void)setSummary:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

