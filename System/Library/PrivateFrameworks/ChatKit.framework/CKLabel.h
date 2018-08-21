/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIImageView;

@interface CKLabel : UILabel {

	UIImageView* _titleIconImageView;
	long long _titleIconImageType;

}

@property (nonatomic,retain) UIImageView * titleIconImageView;              //@synthesize titleIconImageView=_titleIconImageView - In the implementation block
@property (assign,nonatomic) long long titleIconImageType;                  //@synthesize titleIconImageType=_titleIconImageType - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setTitleIconImageType:(long long)arg1 ;
-(UIImageView *)titleIconImageView;
-(void)setTitleIconImageView:(UIImageView *)arg1 ;
-(long long)titleIconImageType;
-(CGSize)sizeOfTitleLabel;
-(CGSize)sizeOfAccessoryImageView;
@end

