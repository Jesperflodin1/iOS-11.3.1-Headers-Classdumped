/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {

	BOOL _leadingMayBeHidden;
	BOOL _trailingMayBeHidden;
	BOOL _allowMixedSideBySideAndOverlay;
	double _minimumMainWidthFraction;
	double _minimumMainWidthFractionForSecondColumn;
	double _maximumMainWidth;
	NSArray* _leadingWidths;
	NSArray* _trailingWidths;
	double _leadingBorderWidth;
	double _trailingBorderWidth;
	UIColor* _borderColor;

}

@property (assign,nonatomic) double minimumMainWidthFraction;                             //@synthesize minimumMainWidthFraction=_minimumMainWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumMainWidthFractionForSecondColumn;              //@synthesize minimumMainWidthFractionForSecondColumn=_minimumMainWidthFractionForSecondColumn - In the implementation block
@property (assign,nonatomic) double maximumMainWidth;                                     //@synthesize maximumMainWidth=_maximumMainWidth - In the implementation block
@property (assign,nonatomic) BOOL leadingMayBeHidden;                                     //@synthesize leadingMayBeHidden=_leadingMayBeHidden - In the implementation block
@property (assign,nonatomic) BOOL trailingMayBeHidden;                                    //@synthesize trailingMayBeHidden=_trailingMayBeHidden - In the implementation block
@property (nonatomic,copy) NSArray * leadingWidths;                                       //@synthesize leadingWidths=_leadingWidths - In the implementation block
@property (nonatomic,copy) NSArray * trailingWidths;                                      //@synthesize trailingWidths=_trailingWidths - In the implementation block
@property (assign,nonatomic) double leadingBorderWidth;                                   //@synthesize leadingBorderWidth=_leadingBorderWidth - In the implementation block
@property (assign,nonatomic) double trailingBorderWidth;                                  //@synthesize trailingBorderWidth=_trailingBorderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                       //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL allowMixedSideBySideAndOverlay;                         //@synthesize allowMixedSideBySideAndOverlay=_allowMixedSideBySideAndOverlay - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setMinimumMainWidthFraction:(double)arg1 ;
-(void)setMinimumMainWidthFractionForSecondColumn:(double)arg1 ;
-(void)setMaximumMainWidth:(double)arg1 ;
-(void)setLeadingMayBeHidden:(BOOL)arg1 ;
-(void)setTrailingMayBeHidden:(BOOL)arg1 ;
-(void)setLeadingWidths:(NSArray *)arg1 ;
-(void)setTrailingWidths:(NSArray *)arg1 ;
-(void)setLeadingBorderWidth:(double)arg1 ;
-(void)setTrailingBorderWidth:(double)arg1 ;
-(void)setAllowMixedSideBySideAndOverlay:(BOOL)arg1 ;
-(double)minimumMainWidthFraction;
-(double)minimumMainWidthFractionForSecondColumn;
-(double)maximumMainWidth;
-(BOOL)leadingMayBeHidden;
-(BOOL)trailingMayBeHidden;
-(NSArray *)leadingWidths;
-(NSArray *)trailingWidths;
-(double)leadingBorderWidth;
-(double)trailingBorderWidth;
-(BOOL)allowMixedSideBySideAndOverlay;
@end

