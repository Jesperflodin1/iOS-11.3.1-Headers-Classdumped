/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton, NSDictionary;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;
	NSDictionary* _cachedDefaultAttributes;

}
+(id)_defaultAttributes;
-(void)setTextAlignment:(long long)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(CGSize)intrinsicContentSize;
-(void)setFont:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(CGSize)shadowOffset;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_setWantsAutolayout;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(id)_defaultAttributes;
-(void)_invalidateCachedDefaultAttributes;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
-(double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2 ;
@end

