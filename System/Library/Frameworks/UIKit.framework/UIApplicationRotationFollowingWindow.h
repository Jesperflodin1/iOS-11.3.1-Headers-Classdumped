/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow
+(BOOL)_isSystemWindow;
-(id)init;
-(void)dealloc;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(void)applicationWindowRotated:(id)arg1 ;
-(void)_commonApplicationRotationFollowingWindowInit;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isInterfaceAutorotationDisabled;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
@end

