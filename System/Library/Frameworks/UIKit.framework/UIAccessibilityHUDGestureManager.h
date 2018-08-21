/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol UIAccessibilityHUDGestureHosting;
@class UIView, UIViewController, UILongPressGestureRecognizer, NSMutableArray, NSString;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {

	UIView*<UIAccessibilityHUDGestureHosting> _view;
	UIViewController* _viewControllerDisplayingHUD;
	UILongPressGestureRecognizer* _recognizer;
	NSMutableArray* _subscribedConcurrentGestureRecognizers;
	BOOL _viewDirectlyShowsHUD;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)_showAccessibilityHUDItem:(id)arg1 ;
-(void)_dismissAccessibilityHUD;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_gestureRecognizerChanged:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_clearButtonItemGestureSubscriptions;
-(id)_subscribedConcurrentGestureRecognizers;
-(void)_concurrentGestureRecognizerFired:(id)arg1 ;
-(id)_bestViewControllerForView;
@end

