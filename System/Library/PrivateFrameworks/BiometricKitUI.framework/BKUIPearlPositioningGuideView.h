/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKit/UIView.h>

@class CADisplayLink, NSDate;

@interface BKUIPearlPositioningGuideView : UIView {

	CADisplayLink* _displayLink;
	double _startLineWidth;
	double _startEdgeDistance;
	double _startCornerRadius;
	double _startPostCornerLength;
	double _startLineAlpha;
	double _targetLineWidth;
	double _targetEdgeDistance;
	double _targetCornerRadius;
	double _targetPostCornerLength;
	double _targetLineAlpha;
	double _lastAnimationTickProgres;
	double _lineWidth;
	double _edgeDistance;
	double _cornerRadius;
	double _postCornerLength;
	double _lineAlpha;
	NSDate* _animationStart;
	double _animationDuration;
	long long _animationCurve;
	/*^block*/id _animationCompletion;

}

@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double edgeDistance;                   //@synthesize edgeDistance=_edgeDistance - In the implementation block
@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double postCornerLength;               //@synthesize postCornerLength=_postCornerLength - In the implementation block
@property (assign,nonatomic) double lineAlpha;                      //@synthesize lineAlpha=_lineAlpha - In the implementation block
@property (nonatomic,retain) NSDate * animationStart;               //@synthesize animationStart=_animationStart - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) long long animationCurve;              //@synthesize animationCurve=_animationCurve - In the implementation block
@property (nonatomic,copy) id animationCompletion;                  //@synthesize animationCompletion=_animationCompletion - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setAnimationCurve:(long long)arg1 ;
-(double)animationDuration;
-(long long)animationCurve;
-(void)_stopDisplay;
-(void)_startDisplay;
-(void)_displayTick;
-(void)setAnimationCompletion:(id)arg1 ;
-(void)setEdgeDistance:(double)arg1 ;
-(void)setPostCornerLength:(double)arg1 ;
-(void)setLineAlpha:(double)arg1 ;
-(id)animationCompletion;
-(void)_startAnimationWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)breathe;
-(void)animateToOpenValuesOverDuration:(double)arg1 curve:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateToBreatheOutValuesOverDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(double)_updatedFloatWithTarget:(double)arg1 current:(double)arg2 start:(double)arg3 progress:(double)arg4 ;
-(double)edgeDistance;
-(double)postCornerLength;
-(double)lineAlpha;
-(void)resetValuesToStart;
-(void)animateToPopOutValuesOverDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToFinishedValuesOverDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)animationStart;
-(void)setAnimationStart:(NSDate *)arg1 ;
@end

