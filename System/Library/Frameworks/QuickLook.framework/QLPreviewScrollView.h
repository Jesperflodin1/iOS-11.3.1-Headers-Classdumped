/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol QLPreviewScrollViewZoomDelegate;
@class NSString;

@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate> {

	BOOL _inSizeChange;
	CGSize _lastUpdatedSize;
	BOOL _readyToCancelPanGesture;
	BOOL _needsZoomUpdate;
	BOOL _preventZoomUpdate;
	BOOL _shouldFit;
	double _minZoomScale;
	double _maxZoomScale;
	double _pinchMaxZoomScale;
	double _fillZoomScale;
	double _fitZoomScale;
	double _contentIsSmallerThanView;
	id<QLPreviewScrollViewZoomDelegate> _zoomDelegate;
	CGSize _contentViewSize;
	UIEdgeInsets _peripheryInsetsLandscape;
	UIEdgeInsets _peripheryInsetsPortrait;

}

@property (assign,nonatomic) BOOL needsZoomUpdate;                                //@synthesize needsZoomUpdate=_needsZoomUpdate - In the implementation block
@property (assign,nonatomic) CGSize contentViewSize;                              //@synthesize contentViewSize=_contentViewSize - In the implementation block
@property (readonly) double minZoomScale;                                         //@synthesize minZoomScale=_minZoomScale - In the implementation block
@property (readonly) double maxZoomScale;                                         //@synthesize maxZoomScale=_maxZoomScale - In the implementation block
@property (readonly) double pinchMaxZoomScale;                                    //@synthesize pinchMaxZoomScale=_pinchMaxZoomScale - In the implementation block
@property (readonly) double fillZoomScale;                                        //@synthesize fillZoomScale=_fillZoomScale - In the implementation block
@property (readonly) double fitZoomScale;                                         //@synthesize fitZoomScale=_fitZoomScale - In the implementation block
@property (readonly) double contentIsSmallerThanView;                             //@synthesize contentIsSmallerThanView=_contentIsSmallerThanView - In the implementation block
@property (__weak) id<QLPreviewScrollViewZoomDelegate> zoomDelegate;              //@synthesize zoomDelegate=_zoomDelegate - In the implementation block
@property (assign,nonatomic) BOOL preventZoomUpdate;                              //@synthesize preventZoomUpdate=_preventZoomUpdate - In the implementation block
@property (assign) BOOL shouldFit;                                                //@synthesize shouldFit=_shouldFit - In the implementation block
@property (assign) UIEdgeInsets peripheryInsetsLandscape;                         //@synthesize peripheryInsetsLandscape=_peripheryInsetsLandscape - In the implementation block
@property (assign) UIEdgeInsets peripheryInsetsPortrait;                          //@synthesize peripheryInsetsPortrait=_peripheryInsetsPortrait - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layoutSubviews;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(double)minZoomScale;
-(double)maxZoomScale;
-(void)updateZoomScales;
-(void)setShouldFit:(BOOL)arg1 ;
-(void)_updateScrollViewZomming;
-(BOOL)preventZoomUpdate;
-(BOOL)needsZoomUpdate;
-(void)setNeedsZoomUpdate:(BOOL)arg1 ;
-(void)updateZoomScalesWithSize:(CGSize)arg1 ;
-(CGSize)contentViewSize;
-(double)_maxZoomScaleForContentSize:(CGSize)arg1 ;
-(BOOL)shouldFit;
-(void)setContentViewSize:(CGSize)arg1 ;
-(CGRect)zoomRectForScale:(double)arg1 withCenter:(CGPoint)arg2 ;
-(double)pinchMaxZoomScale;
-(double)fillZoomScale;
-(double)fitZoomScale;
-(double)contentIsSmallerThanView;
-(void)setPreventZoomUpdate:(BOOL)arg1 ;
-(UIEdgeInsets)peripheryInsetsLandscape;
-(void)setPeripheryInsetsLandscape:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)peripheryInsetsPortrait;
-(void)setPeripheryInsetsPortrait:(UIEdgeInsets)arg1 ;
-(void)resetZoomScale;
-(void)setZoomDelegate:(id<QLPreviewScrollViewZoomDelegate>)arg1 ;
-(id<QLPreviewScrollViewZoomDelegate>)zoomDelegate;
@end

