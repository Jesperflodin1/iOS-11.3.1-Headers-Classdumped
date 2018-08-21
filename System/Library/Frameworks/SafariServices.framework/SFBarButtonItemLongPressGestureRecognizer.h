/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, NSString;

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _barButtonItem;
	id _longPressTarget;
	SEL _longPressAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gestureRecognizerWithLongPressTarget:(id)arg1 action:(SEL)arg2 attachedToBarButtonItem:(id)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)longPress:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1 ;
-(void)_invokeLongPressAction;
@end

