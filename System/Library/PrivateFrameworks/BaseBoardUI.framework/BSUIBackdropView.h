/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBackdropView.h>

@interface BSUIBackdropView : _UIBackdropView {

	double _transitionProgress;
	double _initialScale;
	double _finalScale;
	double _scaleForNoBlur;
	double _rasterizationScale;

}

@property (assign,nonatomic) double scaleForNoBlur;                  //@synthesize scaleForNoBlur=_scaleForNoBlur - In the implementation block
@property (assign,nonatomic) double rasterizationScale;              //@synthesize rasterizationScale=_rasterizationScale - In the implementation block
-(void)setRasterizationScale:(double)arg1 ;
-(double)rasterizationScale;
-(void)applySettings:(id)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionComplete;
-(double)scaleForNoBlur;
-(void)setScaleForNoBlur:(double)arg1 ;
@end

