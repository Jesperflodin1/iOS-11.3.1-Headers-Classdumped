/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, FMHorizontalRule;

@interface FMBorderedField : UIView {

	BOOL _isConfigured;
	UIColor* _borderColor;
	FMHorizontalRule* _topRule;
	FMHorizontalRule* _bottomRule;

}

@property (assign,nonatomic) BOOL isConfigured;                          //@synthesize isConfigured=_isConfigured - In the implementation block
@property (nonatomic,retain) FMHorizontalRule * topRule;                 //@synthesize topRule=_topRule - In the implementation block
@property (nonatomic,retain) FMHorizontalRule * bottomRule;              //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                      //@synthesize borderColor=_borderColor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)prepareForInterfaceBuilder;
-(FMHorizontalRule *)topRule;
-(void)setTopRule:(FMHorizontalRule *)arg1 ;
-(void)setBottomRule:(FMHorizontalRule *)arg1 ;
-(FMHorizontalRule *)bottomRule;
-(void)setIsConfigured:(BOOL)arg1 ;
-(void)commonSetup;
-(BOOL)isConfigured;
@end
