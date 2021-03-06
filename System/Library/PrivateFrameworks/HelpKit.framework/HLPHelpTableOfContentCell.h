/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HLPURLSession, NSLayoutConstraint, HLPHelpItem, UILabel, UIImageView;

@interface HLPHelpTableOfContentCell : UITableViewCell {

	HLPURLSession* _sectionImageURLSession;
	NSLayoutConstraint* _arrowImageViewLeadingConstraint;
	NSLayoutConstraint* _arrowImageViewWidthConstraint;
	NSLayoutConstraint* _sectionImageWidthConstraint;
	NSLayoutConstraint* _sectionImageLeadingConstraint;
	BOOL _showFirstLevelIcon;
	BOOL _ignoreLevels;
	BOOL _closed;
	BOOL _RTL;
	HLPHelpItem* _helpItem;
	UILabel* _nameLabel;
	UIImageView* _arrowImageView;
	UIImageView* _sectionImageView;

}

@property (assign,nonatomic) BOOL RTL;                                    //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * sectionImageView;              //@synthesize sectionImageView=_sectionImageView - In the implementation block
@property (assign,nonatomic) BOOL showFirstLevelIcon;                     //@synthesize showFirstLevelIcon=_showFirstLevelIcon - In the implementation block
@property (assign,nonatomic) BOOL ignoreLevels;                           //@synthesize ignoreLevels=_ignoreLevels - In the implementation block
@property (assign,nonatomic) BOOL closed;                                 //@synthesize closed=_closed - In the implementation block
@property (nonatomic,retain) HLPHelpItem * helpItem;                      //@synthesize helpItem=_helpItem - In the implementation block
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)prepareForReuse;
-(id)accessibilityLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setRTL:(BOOL)arg1 ;
-(void)setShowFirstLevelIcon:(BOOL)arg1 ;
-(void)setHelpItem:(HLPHelpItem *)arg1 ;
-(void)setIgnoreLevels:(BOOL)arg1 ;
-(long long)itemLevel;
-(void)updateToggleImageAnimated:(BOOL)arg1 ;
-(BOOL)showFirstLevelIcon;
-(BOOL)ignoreLevels;
-(HLPHelpItem *)helpItem;
-(BOOL)RTL;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(UIImageView *)sectionImageView;
-(void)setSectionImageView:(UIImageView *)arg1 ;
-(void)toggle;
-(UIImageView *)arrowImageView;
@end

