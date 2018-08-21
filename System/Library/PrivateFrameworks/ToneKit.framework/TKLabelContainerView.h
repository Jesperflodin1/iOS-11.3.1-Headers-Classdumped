/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface TKLabelContainerView : UIView {

	UILabel* _label;
	double _labelDefaultLastBaselineOffsetFromBottom;
	UIEdgeInsets _labelPaddingInsets;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIColor * labelTextColor; 
@property (nonatomic,retain) UIColor * labelShadowColor; 
@property (assign,nonatomic) UIOffset labelShadowOffset; 
@property (assign,nonatomic) UIEdgeInsets labelPaddingInsets;                              //@synthesize labelPaddingInsets=_labelPaddingInsets - In the implementation block
@property (assign,nonatomic) double labelDefaultLastBaselineOffsetFromBottom;              //@synthesize labelDefaultLastBaselineOffsetFromBottom=_labelDefaultLastBaselineOffsetFromBottom - In the implementation block
-(NSString *)labelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)labelTextColor;
-(UIFont *)labelFont;
-(void)setLabelText:(NSString *)arg1 ;
-(UIEdgeInsets)labelPaddingInsets;
-(UIColor *)labelShadowColor;
-(void)setLabelShadowColor:(UIColor *)arg1 ;
-(UIOffset)labelShadowOffset;
-(void)setLabelShadowOffset:(UIOffset)arg1 ;
-(void)setLabelPaddingInsets:(UIEdgeInsets)arg1 ;
-(void)setLabelDefaultLastBaselineOffsetFromBottom:(double)arg1 ;
-(double)labelDefaultLastBaselineOffsetFromBottom;
-(void)setLabelFont:(UIFont *)arg1 ;
@end

