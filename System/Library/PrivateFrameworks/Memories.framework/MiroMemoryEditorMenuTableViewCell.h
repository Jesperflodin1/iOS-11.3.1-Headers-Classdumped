/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface MiroMemoryEditorMenuTableViewCell : UITableViewCell {

	BOOL _showingActivityIndicator;
	NSString* _detailText;
	NSString* _secondaryDetailText;
	UILabel* _titleLabel;
	UILabel* _upperDetailsLabel;
	UILabel* _centerDetailsLabel;
	UILabel* _lowerDetailsLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * upperDetailsLabel;                                                  //@synthesize upperDetailsLabel=_upperDetailsLabel - In the implementation block
@property (nonatomic,retain) UILabel * centerDetailsLabel;                                                 //@synthesize centerDetailsLabel=_centerDetailsLabel - In the implementation block
@property (nonatomic,retain) UILabel * lowerDetailsLabel;                                                  //@synthesize lowerDetailsLabel=_lowerDetailsLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * detailText;                                                        //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) NSString * secondaryDetailText;                                               //@synthesize secondaryDetailText=_secondaryDetailText - In the implementation block
@property (assign,getter=isShowingActivityIndicator,nonatomic) BOOL showingActivityIndicator;              //@synthesize showingActivityIndicator=_showingActivityIndicator - In the implementation block
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)_updateFonts;
-(void)setSecondaryDetailText:(NSString *)arg1 ;
-(UILabel *)upperDetailsLabel;
-(UILabel *)centerDetailsLabel;
-(UILabel *)lowerDetailsLabel;
-(void)setShowingActivityIndicator:(BOOL)arg1 ;
-(NSString *)secondaryDetailText;
-(BOOL)isShowingActivityIndicator;
-(void)setUpperDetailsLabel:(UILabel *)arg1 ;
-(void)setCenterDetailsLabel:(UILabel *)arg1 ;
-(void)setLowerDetailsLabel:(UILabel *)arg1 ;
@end

