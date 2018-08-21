/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView {

	UILabel* _titleLabel;
	UILabel* _subheadLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subheadLabel;              //@synthesize subheadLabel=_subheadLabel - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateLabelTextColors;
-(UILabel *)subheadLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubheadLabel:(UILabel *)arg1 ;
@end

