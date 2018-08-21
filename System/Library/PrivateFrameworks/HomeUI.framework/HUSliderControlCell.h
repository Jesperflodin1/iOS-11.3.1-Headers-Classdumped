/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell {

	HUSimpleSliderControlView* _sliderView;
	NSArray* _sliderConstraints;

}

@property (nonatomic,copy) NSArray * sliderConstraints;                           //@synthesize sliderConstraints=_sliderConstraints - In the implementation block
@property (nonatomic,retain) HUSimpleSliderControlView * sliderView;              //@synthesize sliderView=_sliderView - In the implementation block
-(void)prepareForReuse;
-(void)_updateSliderConstraints;
-(id)allControlViews;
-(void)setSliderView:(HUSimpleSliderControlView *)arg1 ;
-(HUSimpleSliderControlView *)sliderView;
-(NSArray *)sliderConstraints;
-(void)setSliderConstraints:(NSArray *)arg1 ;
@end

