/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol HKVerticalMarginDelegate;
@interface HKVerticalMarginView : UIView {

	unsigned long long _offsetOptions;
	id<HKVerticalMarginDelegate> _marginDelegate;
	double _currentKeyboardHeight;

}

@property (assign,nonatomic) double currentKeyboardHeight;                             //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (assign,nonatomic) unsigned long long offsetOptions;                         //@synthesize offsetOptions=_offsetOptions - In the implementation block
@property (nonatomic,retain) id<HKVerticalMarginDelegate> marginDelegate;              //@synthesize marginDelegate=_marginDelegate - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(id)_findViewController;
-(double)_topOffsetWithController:(id)arg1 ;
-(double)_bottomOffsetWithController:(id)arg1 ;
-(double)_findTabBarHeightWithController:(id)arg1 ;
-(id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2 ;
-(unsigned long long)offsetOptions;
-(void)setOffsetOptions:(unsigned long long)arg1 ;
-(id<HKVerticalMarginDelegate>)marginDelegate;
-(void)setMarginDelegate:(id<HKVerticalMarginDelegate>)arg1 ;
-(double)currentKeyboardHeight;
-(void)setCurrentKeyboardHeight:(double)arg1 ;
@end

