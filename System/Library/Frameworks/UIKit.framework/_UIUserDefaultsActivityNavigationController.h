/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/_UIAppearanceRestriction.h>

@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(CGSize)preferredContentSize;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(double)_statusBarHeightAdjustmentForCurrentOrientation;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
@end
