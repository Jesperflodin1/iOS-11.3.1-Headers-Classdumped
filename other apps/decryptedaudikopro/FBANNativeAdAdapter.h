//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"

@class FBAdCommandProcessor, FBTimer, NSString, UIViewController;

@interface FBANNativeAdAdapter : FBDisplayAdAdapter <FBAdCommandProcessorDelegate>
{
    _Bool _hasLoggedClick;
    _Bool _hasLoggedImpression;
    _Bool _hasLoggedVideoPlay;
    _Bool _hasLoggedVideoSkip;
    FBAdCommandProcessor *_commandProcessor;
    UIViewController *_viewController;
    FBTimer *_snapshotTimer;
}

@property(retain, nonatomic) FBTimer *snapshotTimer; // @synthesize snapshotTimer=_snapshotTimer;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(nonatomic) _Bool hasLoggedVideoSkip; // @synthesize hasLoggedVideoSkip=_hasLoggedVideoSkip;
@property(nonatomic) _Bool hasLoggedVideoPlay; // @synthesize hasLoggedVideoPlay=_hasLoggedVideoPlay;
@property(nonatomic) _Bool hasLoggedImpression; // @synthesize hasLoggedImpression=_hasLoggedImpression;
@property(nonatomic) _Bool hasLoggedClick; // @synthesize hasLoggedClick=_hasLoggedClick;
- (void).cxx_destruct;
- (void)viewControllerDismissed:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)onVideoSkipWithExtraData:(id)arg1;
- (void)onVideoPlayWithExtraData:(id)arg1;
- (void)onClickForViewController:(id)arg1 withExtraData:(id)arg2;
- (void)onImpressionWithExtraData:(id)arg1 withPostData:(id)arg2;
- (void)startAd;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 minViewability:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

