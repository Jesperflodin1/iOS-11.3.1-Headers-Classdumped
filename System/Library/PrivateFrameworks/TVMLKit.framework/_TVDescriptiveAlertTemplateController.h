/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, UIView, UIColor, IKImageElement;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _templateElement;
	NSArray* _templateSubviews;
	NSArray* _templateSubcontrollers;
	UIView* _preferredFocusView;
	UIColor* _backgroundColor;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;

}
-(void)loadView;
-(long long)_blurEffectStyle;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_normalizeButtonsInViews:(id)arg1 ;
@end

