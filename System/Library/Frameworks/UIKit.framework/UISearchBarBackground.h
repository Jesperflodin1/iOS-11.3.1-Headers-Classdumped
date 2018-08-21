/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBarBackgroundImageView.h>
#import <UIKit/_UIBarPositioningInternal.h>

@class UIColor, NSMutableDictionary, UIImage, NSString;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

	UIColor* _barTintColor;
	NSMutableDictionary* _customBackgroundImages;
	NSMutableDictionary* _generatedBackgroundImages;
	long long _barPosition;
	unsigned long long _searchBarStyle;
	unsigned _barStyle : 3;
	unsigned _barTranslucence : 3;
	unsigned _usesEmbeddedAppearance : 1;
	unsigned _actingAsNavBar : 1;
	unsigned _usesContiguousBarBackground : 1;
	unsigned _barHasController;

}

@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL usesEmbeddedAppearance; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * backgroundImagePrompt; 
@property (assign,nonatomic) BOOL usesContiguousBarBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isTranslucent;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(UIImage *)backgroundImage;
-(void)_setBarPosition:(long long)arg1 ;
-(long long)_barPosition;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIColor *)barTintColor;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)_setBehavesAsIfSearchBarHasController:(BOOL)arg1 ;
-(BOOL)_hasCustomBackgroundImage;
-(void)_updateBackgroundImage;
-(void)setUsesContiguousBarBackground:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(BOOL)usesEmbeddedAppearance;
-(unsigned long long)searchBarStyle;
-(void)_updateBackgroundImageIfPossible;
-(id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2 ;
-(UIImage *)backgroundImagePrompt;
-(BOOL)usesContiguousBarBackground;
@end

