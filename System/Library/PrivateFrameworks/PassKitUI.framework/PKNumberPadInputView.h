/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIInputView.h>

@class UIStackView;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_reloadSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(BOOL)showsDecimalPointButton;
-(id)initWithDefaultFrame;
@end

