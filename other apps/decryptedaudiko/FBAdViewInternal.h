//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdView.h"

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdContentContainerDelegate-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class FBAdCommandProcessor, FBAdContentContainer, FBAdViewabilityValidator, FBHTMLAdDataModel, NSDate, NSString, UIViewController;
@protocol FBANAdRendererDelegate, FBAdViewInternalDelegate;

@interface FBAdViewInternal : FBAdView <FBAdCommandProcessorDelegate, FBAdViewabilityValidatorDelegate, FBAdContentContainerDelegate>
{
    _Bool _adValid;
    _Bool _modalViewPresenting;
    _Bool _isInterstitial;
    _Bool _isImpressionSent;
    UIViewController *_rootViewController;
    id <FBAdViewInternalDelegate> _internalDelegate;
    id <FBANAdRendererDelegate> _rendererDelegate;
    long long _orientation;
    NSDate *_interstitialOpenedTime;
    FBAdCommandProcessor *_commandHandler;
    FBAdViewabilityValidator *_viewabilityValidator;
    long long _minViewabilityPercentage;
    FBAdContentContainer *_adContentContainer;
    struct FBAdSize _adSizeType;
}

@property(nonatomic) struct FBAdSize adSizeType; // @synthesize adSizeType=_adSizeType;
@property(retain, nonatomic) FBAdContentContainer *adContentContainer; // @synthesize adContentContainer=_adContentContainer;
@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(retain, nonatomic) FBAdCommandProcessor *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(nonatomic) _Bool isImpressionSent; // @synthesize isImpressionSent=_isImpressionSent;
@property(retain, nonatomic) NSDate *interstitialOpenedTime; // @synthesize interstitialOpenedTime=_interstitialOpenedTime;
@property(nonatomic) _Bool isInterstitial; // @synthesize isInterstitial=_isInterstitial;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting; // @synthesize modalViewPresenting=_modalViewPresenting;
@property(nonatomic, getter=isAdValid) _Bool adValid; // @synthesize adValid=_adValid;
@property(nonatomic) __weak id <FBANAdRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(nonatomic) __weak id <FBAdViewInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)adDidFinishHandlingClick;
- (void)adDidLogClick;
- (void)adWillLogImpression;
- (void)adDidLoad;
- (void)viewControllerDismissed:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (_Bool)viewDidAppearOnScreen;
- (void)trackInterstitialOpen;
- (void)finishHandlingClick;
- (void)handleClickWithExtraData:(id)arg1;
- (_Bool)processFBAdSchemeLink:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (_Bool)isFBAdScheme:(id)arg1;
- (_Bool)processRequestURL:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (void)didMoveToSuperview;
- (void)loadAdFromMarkup:(id)arg1 activationCommand:(id)arg2 orientation:(long long)arg3;
- (void)sendImpression;
@property(readonly, nonatomic) FBHTMLAdDataModel *offsiteAd;
- (void)disableViewabilityValidation;
- (void)ensureViewabilityValidation;
- (void)createAdContentContainer;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)validRectForFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)loadAd;
- (id)initWithAdData:(id)arg1 minViewability:(int)arg2 adSize:(struct FBAdSize)arg3 rootViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

