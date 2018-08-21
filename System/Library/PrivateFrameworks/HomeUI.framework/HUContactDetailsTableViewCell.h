/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, UIImageView, UIView, UILabel, NSArray, NSString, CNContact, UIImage;

@interface HUContactDetailsTableViewCell : UITableViewCell {

	CNAvatarView* _avatarView;
	UIImageView* _photoView;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _constraints;

}

@property (nonatomic,readonly) CNAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIImageView * photoView;                 //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                     //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) UIImage * photo; 
+(BOOL)requiresConstraintBasedLayout;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(NSArray *)constraints;
-(void)prepareForReuse;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UIImageView *)photoView;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setContact:(CNContact *)arg1 ;
-(UILabel *)descriptionLabel;
@end

