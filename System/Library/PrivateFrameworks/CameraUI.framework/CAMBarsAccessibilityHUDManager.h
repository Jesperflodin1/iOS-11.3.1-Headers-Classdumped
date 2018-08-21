/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CAMBarsAccessibilityHUDManagerGestureProviderCAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerDelegate;
@class UIView, UILongPressGestureRecognizer, NSString;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate> {

	UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> _view;
	id<CAMBarsAccessibilityHUDManagerDelegate> _delegate;
	UILongPressGestureRecognizer* __accessibilityLongPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<CAMBarsAccessibilityHUDManagerDelegate> delegate;                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> view;                                     //@synthesize view=_view - In the implementation block
@property (setter=_setAccessibilityLongPressGestureRecognizer:,nonatomic,retain) UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;              //@synthesize _accessibilityLongPressGestureRecognizer=__accessibilityLongPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMBarsAccessibilityHUDManagerDelegate>)delegate;
-(void)setDelegate:(id<CAMBarsAccessibilityHUDManagerDelegate>)arg1 ;
-(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setView:(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)arg1 ;
-(CGPoint)locationOfAccessibilityGestureInView:(id)arg1 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(BOOL)arg3 ;
-(void)_handleAccessibilityLongPressGesture:(id)arg1 ;
-(void)_setAccessibilityLongPressGestureRecognizer:(id)arg1 ;
-(void)preferredContentSizeChanged;
-(UILongPressGestureRecognizer *)_accessibilityLongPressGestureRecognizer;
@end
