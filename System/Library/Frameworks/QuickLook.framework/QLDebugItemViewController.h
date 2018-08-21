/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class UITextView, NSMutableDictionary, NSLayoutConstraint;

@interface QLDebugItemViewController : QLItemViewController {

	BOOL _constraintsSetUp;
	UITextView* _logTextView;
	NSMutableDictionary* _selectorToCount;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2 ;
-(void)_encounterMethodCall:(SEL)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2 ;
-(id)_attributesForLogLevel:(unsigned long long)arg1 ;
-(BOOL)canSwipeToDismiss;
@end
