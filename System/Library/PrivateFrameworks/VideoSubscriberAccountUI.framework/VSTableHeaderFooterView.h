/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKit/UIView.h>

@protocol VSTableHeaderFooterViewDelegate;
@class UIView, UILabel, UIStackView, VSFontCenter;

@interface VSTableHeaderFooterView : UIView {

	long long _kind;
	id<VSTableHeaderFooterViewDelegate> _delegate;
	UIView* _button;
	UILabel* _textLabel;
	UIStackView* _stackView;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UILabel * textLabel;                                              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                        //@synthesize fontCenter=_fontCenter - In the implementation block
@property (assign,nonatomic) long long kind;                                                   //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic,__weak) id<VSTableHeaderFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * button;                                                  //@synthesize button=_button - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)button;
-(id<VSTableHeaderFooterViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<VSTableHeaderFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setText:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(UILabel *)textLabel;
-(UIStackView *)stackView;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(void)setButton:(UIView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(void)_didInvalidateIntrinsicContentSize;
@end

