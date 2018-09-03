//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADVideoRendering-Protocol.h"
#import "GLKViewDelegate-Protocol.h"

@class AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, EAGLContext, GADBlockInvocation, GADGLSphericalShader, GLKView, NSString, NSThread;
@protocol GADVideoPlayerGLViewDelegate;

@interface GADVideoPlayerGLView : UIView <GLKViewDelegate, GADVideoRendering>
{
    GLKView *_glView;
    NSThread *_renderThread;
    CADisplayLink *_displayLink;
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayer *_currentPlayer;
    double _nextDisplayTime;
    _Bool _hasDisplayedAtLeastOnePixelBuffer;
    double _displayStartTimeIntervalSince1970;
    double _videoOutputEmptyTimeIntervalThreshold;
    EAGLContext *_context;
    GADGLSphericalShader *_sphericalShader;
    _Bool _applicationActive;
    _Bool _isSubViewOfVisibleWindow;
    GADBlockInvocation *_renderThreadBlockInvocation;
    id <GADVideoPlayerGLViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GADVideoPlayerGLViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)renderThreadApplicationDidEnterBackground;
- (void)renderThreadApplicationWillEnterForeground;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)renderThreadWillMoveToWindow:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)renderThreadSetUpFailedWithErrorMessage:(id)arg1;
- (void)renderThreadSetUpSucceeded;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)resumeDisplayLink;
- (void)pauseDisplayLink;
- (void)unscheduleDisplayLink;
- (void)displayLinkCallback:(id)arg1;
- (void)layoutSubviews;
- (void)renderThreadResetVideoOutput;
- (void)renderThreadSetUp;
- (id)displayLinkCallbackBlockInvocation;
- (id)renderThreadBlockInvocationWithDisplayLink:(id)arg1;
- (void)stopRenderThread;
- (void)startRenderThread;
- (void)renderThreadUserTouchMovedByVector:(id)arg1;
- (void)handleUserTouchMovedByVector:(struct CGVector)arg1;
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;
- (void)disableVideoPlaybackOptimization;
- (void)resetVideoPlaybackOptimization;
- (void)enableVideoPlaybackOptimization;
- (void)setUpWithPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

