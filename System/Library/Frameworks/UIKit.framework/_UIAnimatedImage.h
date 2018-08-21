/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImage.h>

@class NSArray;

@interface _UIAnimatedImage : UIImage {

	NSArray* _images;
	double _duration;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)duration;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(id)_initWithOtherImage:(id)arg1 ;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)images;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(void)_flipImageOrientationHorizontally;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2 ;
-(void)_setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2 ;
-(id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4 ;
-(id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4 ;
@end

