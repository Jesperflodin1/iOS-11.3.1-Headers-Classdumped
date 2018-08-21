/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIVisualEffectView, UITextView, UIColor, _UIFloatingContentView, UITapGestureRecognizer, UILabel, NSAttributedString, NSString;

@interface TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate> {

	UIVisualEffectView* _vibrantEffectView;
	UITextView* _auxilliaryTextView;
	BOOL _textTruncating;
	BOOL _moreLabelOnNewLine;
	BOOL _trackHorizontal;
	BOOL _alwaysFocusable;
	BOOL _needsTextSizeComputation;
	UIColor* _descriptionTextColor;
	UIColor* _descriptionTextHighlightColor;
	UIColor* _highlightBackgroundColor;
	double _moreHighlightPadding;
	UIColor* _moreLabelTextColor;
	/*^block*/id _selectionHandler;
	/*^block*/id _playHandler;
	UITextView* _descriptionTextView;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundView;
	UITapGestureRecognizer* _selectRecognizer;
	UITapGestureRecognizer* _playRecognizer;
	UILabel* _moreLabel;
	UITapGestureRecognizer* _moreLabelTapGestureRecognizer;

}

@property (nonatomic,retain) UITextView * descriptionTextView;                                      //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                                 //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * selectRecognizer;                             //@synthesize selectRecognizer=_selectRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playRecognizer;                               //@synthesize playRecognizer=_playRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * moreLabel;                                                   //@synthesize moreLabel=_moreLabel - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * moreLabelTapGestureRecognizer;              //@synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL needsTextSizeComputation;                                         //@synthesize needsTextSizeComputation=_needsTextSizeComputation - In the implementation block
@property (nonatomic,retain) NSAttributedString * descriptionText; 
@property (nonatomic,retain) UIColor * descriptionTextColor;                                        //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextHighlightColor;                               //@synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightBackgroundColor;                                    //@synthesize highlightBackgroundColor=_highlightBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (getter=isTextTruncating,nonatomic,readonly) BOOL textTruncating;                         //@synthesize textTruncating=_textTruncating - In the implementation block
@property (assign,nonatomic) double moreHighlightPadding;                                           //@synthesize moreHighlightPadding=_moreHighlightPadding - In the implementation block
@property (assign,nonatomic) BOOL moreLabelOnNewLine;                                               //@synthesize moreLabelOnNewLine=_moreLabelOnNewLine - In the implementation block
@property (nonatomic,retain) UIColor * moreLabelTextColor;                                          //@synthesize moreLabelTextColor=_moreLabelTextColor - In the implementation block
@property (assign,nonatomic) BOOL trackHorizontal;                                                  //@synthesize trackHorizontal=_trackHorizontal - In the implementation block
@property (assign,getter=isAlwaysFocusable,nonatomic) BOOL alwaysFocusable;                         //@synthesize alwaysFocusable=_alwaysFocusable - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                                     //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id playHandler;                                                          //@synthesize playHandler=_playHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cornerRadius;
-(NSAttributedString *)descriptionText;
-(void)setDescriptionText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(unsigned long long)maximumNumberOfLines;
-(UILabel *)moreLabel;
-(void)setMoreLabel:(UILabel *)arg1 ;
-(_UIFloatingContentView *)floatingView;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(CGRect)_moreLabelFrame;
-(void)_recomputeTextSizeIfNeeded;
-(id)_moreLabelExclusionPath;
-(BOOL)isAlwaysFocusable;
-(BOOL)isTextTruncating;
-(void)_setNeedsTextSizeComputation;
-(UITapGestureRecognizer *)playRecognizer;
-(id)playHandler;
-(void)setTrackHorizontal:(BOOL)arg1 ;
-(UIColor *)descriptionTextHighlightColor;
-(void)setDescriptionTextHighlightColor:(UIColor *)arg1 ;
-(double)moreHighlightPadding;
-(void)setMoreHighlightPadding:(double)arg1 ;
-(BOOL)moreLabelOnNewLine;
-(void)setMoreLabelOnNewLine:(BOOL)arg1 ;
-(UIColor *)moreLabelTextColor;
-(void)setMoreLabelTextColor:(UIColor *)arg1 ;
-(BOOL)trackHorizontal;
-(void)setAlwaysFocusable:(BOOL)arg1 ;
-(void)setPlayHandler:(id)arg1 ;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(UITapGestureRecognizer *)selectRecognizer;
-(void)setSelectRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPlayRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)moreLabelTapGestureRecognizer;
-(BOOL)needsTextSizeComputation;
-(void)setNeedsTextSizeComputation:(BOOL)arg1 ;
-(void)setHighlightBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightBackgroundColor;
@end

