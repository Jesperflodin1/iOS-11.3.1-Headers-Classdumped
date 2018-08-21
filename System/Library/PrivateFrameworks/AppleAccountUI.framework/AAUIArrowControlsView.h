/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKit/UIView.h>

@protocol AAUIArrowControlsViewDelegate;
@class UIButton;

@interface AAUIArrowControlsView : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	id<AAUIArrowControlsViewDelegate> _delegate;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) id<AAUIArrowControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                                 //@synthesize downButton=_downButton - In the implementation block
@property (nonatomic,readonly) UIButton * upButton;                                   //@synthesize upButton=_upButton - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                          //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultWidthForOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<AAUIArrowControlsViewDelegate>)delegate;
-(void)setDelegate:(id<AAUIArrowControlsViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)_arrowButtonWasTapped:(id)arg1 ;
-(UIButton *)downButton;
-(UIButton *)upButton;
@end

