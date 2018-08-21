/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class SLSheetTextComposeView, NSMutableArray, NSMutableDictionary, UIView, UITextView, UILabel;

@interface SLSheetContentView : UIView {

	SLSheetTextComposeView* _textComposeView;
	NSMutableArray* _constraints;
	NSMutableDictionary* _intrinsicSizes;
	double _previewTopMargin;
	double _textViewTopMargin;
	UIView* _bottomSeparator;
	UIView* _autoCompletionModeSeparator;
	BOOL _autoCompletionMode;
	double _autoCompletionTextViewHeight;
	UIView* _previewView;
	UIView* _accessoryView;

}

@property (nonatomic,retain) UIView * previewView;                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain) UIView * accessoryView;                    //@synthesize accessoryView=_accessoryView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UITextView *)textView;
-(UILabel *)placeholderLabel;
-(void)_setConstraints;
-(void)setIntrinsicSize:(CGSize)arg1 forVerticalSizeClass:(long long)arg2 ;
-(void)endAutoCompletionMode;
-(void)preflightAutoCompletionModeWithApparentHeight:(double)arg1 ;
-(void)beginAutoCompletionMode;
-(void)_setupView;
-(void)_resetAccessoryView;
-(void)resetPreview;
-(double)_previewMarginForContentSize:(CGSize)arg1 ;
-(double)_textTopMarginForContentSize:(CGSize)arg1 ;
-(void)updatePreviewMargin;
-(void)updateTextViewMargin;
-(void)adjustComposeViewForPreview;
-(void)_setupConstraints;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end
