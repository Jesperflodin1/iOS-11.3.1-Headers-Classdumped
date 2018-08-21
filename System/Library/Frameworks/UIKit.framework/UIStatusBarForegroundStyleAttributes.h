/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, UIColor;

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying> {

	double _height;
	long long _legibilityStyle;
	long long _idiom;
	NSMutableDictionary* _cachedFonts;
	BOOL _isTintColorBlack;
	BOOL _hasBusyBackground;
	NSString* _cachedUniqueIdentifier;
	BOOL _canShowBreadcrumbs;
	UIColor* _tintColor;

}

@property (assign,nonatomic) BOOL canShowBreadcrumbs;                   //@synthesize canShowBreadcrumbs=_canShowBreadcrumbs - In the implementation block
@property (nonatomic,retain,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(double)scale;
-(UIColor *)tintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)imageNamed:(id)arg1 ;
-(long long)idiom;
-(id)untintedImageNamed:(id)arg1 ;
-(id)textColorForStyle:(long long)arg1 ;
-(double)height;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 idiom:(long long)arg5 ;
-(long long)legibilityStyle;
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 shouldCache:(BOOL)arg10 ;
-(id)textFontForStyle:(long long)arg1 ;
-(BOOL)usesVerticalLayout;
-(double)baselineOffsetForStyle:(long long)arg1 ;
-(double)standardPadding;
-(void)setCanShowBreadcrumbs:(BOOL)arg1 ;
-(BOOL)canShowBreadcrumbs;
-(double)edgePadding;
-(double)middlePadding;
-(id)accessibilityHUDImageNamed:(id)arg1 ;
-(double)shadowPadding;
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(double)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 style:(long long)arg7 withLegibilityStyle:(long long)arg8 legibilityStrength:(double)arg9 ;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(long long)arg2 legibilityStrength:(double)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(BOOL)supportsShowingBuildVersion;
-(double)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 ;
-(id)batteryColorForCapacity:(int)arg1 style:(unsigned long long)arg2 usingTintColor:(BOOL)arg3 ;
-(id)bluetoothBatteryImageNameWithCapacity:(double)arg1 ;
-(id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(double)arg2 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 ;
-(double)bluetoothBatteryExtraPadding;
-(id)bluetoothBatteryColorForCapacity:(double)arg1 usingTintColor:(BOOL)arg2 ;
-(long long)activityIndicatorStyleWithSyncActivity:(BOOL)arg1 ;
-(id)uniqueIdentifier;
-(double)sizeForMoonMaskVisible:(BOOL)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(id)generateUniqueIdentifier;
-(id)_batteryColorForCapacity:(int)arg1 lowCapacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4 ;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(int)arg2 style:(unsigned long long)arg3 usingTintColor:(BOOL)arg4 ;
-(UIEdgeInsets)edgeInsetsForBatteryInsides;
-(double)_roundDimension:(double)arg1 ;
-(UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
-(double)textOffsetForStyle:(long long)arg1 ;
-(void)_drawText:(id)arg1 inRect:(CGRect)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 textAlignment:(long long)arg6 ;
-(void)drawTextInRect:(CGRect)arg1 withColor:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_cacheQueue_cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(void)_cacheQueue_cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 groupFullName:(id)arg4 tintColor:(id)arg5 ;
-(id)_cachedImageNamed:(id)arg1 ;
-(id)uncachedImageNamed:(id)arg1 ;
-(void)_cacheImage:(id)arg1 named:(id)arg2 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(long long)arg3 withStrength:(double)arg4 inTempGroup:(id)arg5 shouldCache:(BOOL)arg6 ;
-(id)imageIdWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 style:(long long)arg5 ;
-(void)drawText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 textSize:(CGSize)arg7 textHeight:(double)arg8 ;
-(id)makeTextFontForStyle:(long long)arg1 ;
-(BOOL)_shouldUseBoldFontForStyle:(long long)arg1 ;
-(id)proportionalFontForFont:(id)arg1 ;
-(id)initWithHeight:(double)arg1 legibilityStyle:(long long)arg2 tintColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(id)cachedImageWithText:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 textAlignment:(long long)arg5 style:(long long)arg6 itemType:(int)arg7 ;
@end

