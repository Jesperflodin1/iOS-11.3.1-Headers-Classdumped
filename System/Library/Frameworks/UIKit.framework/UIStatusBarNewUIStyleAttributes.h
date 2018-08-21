/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarStyleAttributes.h>

@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	BOOL _hasBusyBackground;

}
-(BOOL)isTranslucent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(Class)foregroundStyleClass;
-(long long)legibilityStyle;
-(id)foregroundColor;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(BOOL)shouldUseVisualAltitude;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 ;
-(BOOL)isTransparent;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
@end

