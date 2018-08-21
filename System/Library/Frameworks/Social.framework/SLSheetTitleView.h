/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray, UILabel, NSString;

@interface SLSheetTitleView : UIView {

	UIImageView* _serviceIconView;
	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)title;
-(void)sizeToFit;
-(void)updateConstraints;
-(void)setServiceIconImage:(id)arg1 ;
-(void)_setupTitleLabel;
@end

