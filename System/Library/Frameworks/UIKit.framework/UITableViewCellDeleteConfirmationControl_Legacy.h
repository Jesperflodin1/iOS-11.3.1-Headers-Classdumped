/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

	BOOL _visible;
	UITableViewCellDeleteConfirmationGestureRecognizer* _deleteConfirmationGesture;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible; 
+(CGSize)defaultSizeForTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)defaultSize;
-(id)initWithTitle:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)_confirmationAnimationDidEnd;
-(BOOL)isVisible;
-(void)touchUpInside:(id)arg1 ;
-(void)touchUpOutside:(id)arg1 ;
-(void)cancelDeleteConfirmationWithGesture:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

