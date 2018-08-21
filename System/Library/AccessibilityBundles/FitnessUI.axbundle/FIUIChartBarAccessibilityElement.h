/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:12 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/FitnessUI.axbundle/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface FIUIChartBarAccessibilityElement : UIAccessibilityElement {

	id _barSeries;
	unsigned long long _index;
	CGPoint _barPoint;

}

@property (assign,nonatomic) CGPoint barPoint;                      //@synthesize barPoint=_barPoint - In the implementation block
@property (nonatomic,retain) id barSeries;                          //@synthesize barSeries=_barSeries - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)accessibilityElementsForBarSeries:(id)arg1 ;
-(CGRect)_accessibilityFrameUniform;
-(CGRect)_accessibilityFrameStandardBar;
-(CGPoint)barPoint;
-(void)setBarPoint:(CGPoint)arg1 ;
-(id)barSeries;
-(void)setBarSeries:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 barSeries:(id)arg2 index:(unsigned long long)arg3 plotPoint:(id)arg4 ;
-(id)accessibilityLabel;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(CGRect)accessibilityFrame;
@end
