/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, NSLayoutConstraint, VideosUsageEntityItem, NSString;

@interface VideosUsageTableViewCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _sizeLabel;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	VideosUsageEntityItem* _item;

}

@property (assign,nonatomic,__weak) VideosUsageEntityItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(void)configureForUsageItem:(id)arg1 ;
-(VideosUsageEntityItem *)item;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)title;
-(void)updateConstraints;
-(void)setItem:(VideosUsageEntityItem *)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)imageView;
@end

