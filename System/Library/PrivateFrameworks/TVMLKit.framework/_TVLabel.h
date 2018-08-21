/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UILabel.h>

@interface _TVLabel : UILabel {

	long long _previousNumberOfLines;
	CGSize _cachedSizeThatFits;
	CGSize _previousTargetSize;
	CGRect _cachedTextRectForBounds;
	CGRect _previousBounds;

}

@property (assign,nonatomic) CGRect cachedTextRectForBounds;               //@synthesize cachedTextRectForBounds=_cachedTextRectForBounds - In the implementation block
@property (assign,nonatomic) CGRect previousBounds;                        //@synthesize previousBounds=_previousBounds - In the implementation block
@property (assign,nonatomic) long long previousNumberOfLines;              //@synthesize previousNumberOfLines=_previousNumberOfLines - In the implementation block
@property (assign,nonatomic) CGSize cachedSizeThatFits;                    //@synthesize cachedSizeThatFits=_cachedSizeThatFits - In the implementation block
@property (assign,nonatomic) CGSize previousTargetSize;                    //@synthesize previousTargetSize=_previousTargetSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(CGSize)cachedSizeThatFits;
-(CGSize)previousTargetSize;
-(void)setCachedSizeThatFits:(CGSize)arg1 ;
-(void)setPreviousTargetSize:(CGSize)arg1 ;
-(void)_clearCachedValues;
-(CGRect)previousBounds;
-(long long)previousNumberOfLines;
-(CGRect)cachedTextRectForBounds;
-(void)setCachedTextRectForBounds:(CGRect)arg1 ;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(void)setPreviousNumberOfLines:(long long)arg1 ;
@end

