/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol EKUITintColorUpdateDelegate;
@class UIView;

@interface TintColorUpdateView : UIView {

	UIView*<EKUITintColorUpdateDelegate> _tintColorUpdateDelegate;

}

@property (assign,nonatomic) UIView*<EKUITintColorUpdateDelegate> tintColorUpdateDelegate;              //@synthesize tintColorUpdateDelegate=_tintColorUpdateDelegate - In the implementation block
-(void)tintColorDidChange;
-(UIView*<EKUITintColorUpdateDelegate>)tintColorUpdateDelegate;
-(void)setTintColorUpdateDelegate:(UIView*<EKUITintColorUpdateDelegate>)arg1 ;
@end

