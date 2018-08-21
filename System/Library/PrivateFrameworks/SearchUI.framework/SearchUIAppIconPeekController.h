/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SpringBoardUI/SBUIAppIconForceTouchController.h>
#import <libobjc.A.dylib/SBUIAppIconForceTouchControllerDataSource.h>
#import <libobjc.A.dylib/SBUIAppIconForceTouchControllerDelegate.h>

@class NSString;

@interface SearchUIAppIconPeekController : SBUIAppIconForceTouchController <SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAppIconPeekController;
-(id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2 ;
-(CGRect)appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2 ;
-(id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2 ;
-(double)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2 ;
-(BOOL)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2 ;
-(void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2 ;
-(void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2 ;
-(BOOL)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(id)arg4 ;
@end

