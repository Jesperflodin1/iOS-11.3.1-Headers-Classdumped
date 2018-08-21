/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIButton.h>

@interface HUColoredButton : UIButton {

	BOOL _backgroundColorFollowsTintColor;
	double _highlightedAlpha;
	double _highlightedTextAlpha;

}

@property (assign,nonatomic) double highlightedAlpha;                           //@synthesize highlightedAlpha=_highlightedAlpha - In the implementation block
@property (assign,nonatomic) double highlightedTextAlpha;                       //@synthesize highlightedTextAlpha=_highlightedTextAlpha - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL backgroundColorFollowsTintColor;              //@synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3 ;
-(void)setHighlightedAlpha:(double)arg1 ;
-(void)setHighlightedTextAlpha:(double)arg1 ;
-(double)highlightedTextAlpha;
-(double)highlightedAlpha;
-(BOOL)backgroundColorFollowsTintColor;
-(void)setBackgroundColorFollowsTintColor:(BOOL)arg1 ;
@end
