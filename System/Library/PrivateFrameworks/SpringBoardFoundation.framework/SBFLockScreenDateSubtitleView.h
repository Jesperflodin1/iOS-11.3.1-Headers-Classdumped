/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBFScreenFadeReplicatable.h>

@protocol SBFScreenFadeReplicatable;
@class NSHashTable, SBUILegibilityLabel, UIView, _UILegibilitySettings, UIFont, NSString;

@interface SBFLockScreenDateSubtitleView : UIView <SBFScreenFadeReplicatable> {

	NSHashTable* _replicatedViews;
	SBUILegibilityLabel* _label;
	UIView*<SBFScreenFadeReplicatable> _accessoryView;
	UIView*<SBFScreenFadeReplicatable> _backgroundView;
	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	double _customInterItemSpacing;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double strength;                                                //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) double baselineOffsetFromOrigin; 
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
@property (nonatomic,retain) NSString * string; 
@property (nonatomic,retain) UIView*<SBFScreenFadeReplicatable> accessoryView;               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView*<SBFScreenFadeReplicatable> backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) double customInterItemSpacing;                                  //@synthesize customInterItemSpacing=_customInterItemSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(id)labelFont;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setBackgroundView:(UIView*<SBFScreenFadeReplicatable>)arg1 ;
-(UIView*<SBFScreenFadeReplicatable>)backgroundView;
-(UIFont *)font;
-(UIView*<SBFScreenFadeReplicatable>)accessoryView;
-(void)setAccessoryView:(UIView*<SBFScreenFadeReplicatable>)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(double)baselineOffsetFromBottom;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)replicate;
-(id)initWithString:(id)arg1 accessoryView:(id)arg2 ;
-(void)_enumerateReplicateViews:(/*^block*/id)arg1 ;
-(CGRect)subtitleLabelFrame;
-(id)_createReplicateView;
-(double)baselineOffsetFromOrigin;
-(CGRect)backgroundViewFrame;
-(double)customInterItemSpacing;
-(void)setCustomInterItemSpacing:(double)arg1 ;
-(CGRect)accessoryViewFrame;
-(double)interItemSpacing;
-(void)_updateForCurrentSizeCategory;
@end

