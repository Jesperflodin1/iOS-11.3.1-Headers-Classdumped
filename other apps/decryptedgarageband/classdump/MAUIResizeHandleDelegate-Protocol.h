//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAUIResizeHandleView, UIPanGestureRecognizer;

@protocol MAUIResizeHandleDelegate <NSObject>

@optional
- (double)resizeHandleLongPressIntervalForHandle:(long long)arg1;
- (_Bool)resizeHandleView:(MAUIResizeHandleView *)arg1 shouldCancelOnTouchUpAtLocation:(struct CGPoint)arg2;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 stateChangedFromState:(long long)arg2 toState:(long long)arg3;
- (void)resizeHandleViewZoomActionEnd:(MAUIResizeHandleView *)arg1 forHandle:(long long)arg2;
- (void)resizeHandleViewZoomActionAbortZoomAnimation:(MAUIResizeHandleView *)arg1 forHandle:(long long)arg2;
- (_Bool)resizeHandleViewZoomActionBegin:(MAUIResizeHandleView *)arg1 forHandle:(long long)arg2;
- (void)resizeHandleViewTapAction:(MAUIResizeHandleView *)arg1 atLocation:(struct CGPoint)arg2;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 shouldAllowAutoScrollingHorizontal:(_Bool *)arg2 vertical:(_Bool *)arg3 panRecognizer:(UIPanGestureRecognizer *)arg4;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 panAction:(UIPanGestureRecognizer *)arg2 forHandle:(long long)arg3 isAutoScroll:(_Bool)arg4;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 actionWithNewFrame:(struct CGRect)arg2 forHandle:(long long)arg3;
- (struct CGRect)resizeHandleView:(MAUIResizeHandleView *)arg1 quantizeFrame:(struct CGRect)arg2 forHandle:(long long)arg3;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 didEndWithHandle:(long long)arg2 didChange:(_Bool)arg3 cancelled:(_Bool)arg4 panRecognizer:(UIPanGestureRecognizer *)arg5;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 didEndWithHandle:(long long)arg2 didChange:(_Bool)arg3 cancelled:(_Bool)arg4;
- (void)resizeHandleView:(MAUIResizeHandleView *)arg1 willBeginWithHandle:(long long)arg2;
- (_Bool)resizeHandleView:(MAUIResizeHandleView *)arg1 shouldBeginWithHandle:(long long)arg2;
@end
