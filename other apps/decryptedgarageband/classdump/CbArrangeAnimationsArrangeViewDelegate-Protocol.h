//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbArrangeTrackViewController, CbTronViewController, MAUIScrollView, UIView, UIViewController;

@protocol CbArrangeAnimationsArrangeViewDelegate <NSObject>
- (UIView *)trackPanelView;
- (struct CGRect)rulerViewFrame;
- (struct CGRect)arrangeMainViewFrame;
- (_Bool)showsTracks;
- (struct CGRect)currentTouchInstrumentOriginalFrame;
- (UIView *)currentTouchInstrumentOrTronDimView;
- (UIViewController *)currentTouchInstrumentController;
- (_Bool)isPlaying;
- (CbTronViewController *)tronViewController;
- (void)setHeight:(double)arg1 ofTrackController:(CbArrangeTrackViewController *)arg2 animated:(_Bool)arg3 updateArrangeViewAndOtherTracks:(_Bool)arg4;
- (void)updateArrangeViewSizesAfterTrackHeightChange;
- (void)updateArrangeAfterHeaderSizeAndOrZoomChange:(_Bool)arg1;
- (_Bool)updateArrangeWhileRecordingIfEnlongatedAndUpdateSPLPosition:(_Bool)arg1 zoomDidChange:(_Bool)arg2;
- (double)currentScrollViewFrameLeftOffsetIgnoringAnimation;
- (double)currentHeaderWidthIgnoringAnimation;
- (double)currentVisibleHeaderWidth;
- (double)currentArrangeWidth;
- (MAUIScrollView *)scrollView;
@end

