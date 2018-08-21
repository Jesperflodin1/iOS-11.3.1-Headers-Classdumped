/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic,__weak) UISelectionGrabber * grabber; 
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(UISelectionGrabber *)grabber;
-(CGRect)_extendedHitTestingRectIncludingCalloutBarAdjustments:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(void)setGrabber:(UISelectionGrabber *)arg1 ;
@end

