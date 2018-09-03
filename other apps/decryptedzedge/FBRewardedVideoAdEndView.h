//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdContentContainerDelegate-Protocol.h"
#import "FBAdViewNavigationPolicy-Protocol.h"

@class FBAdCommandProcessor, FBRewardedVideoAdDataModel, NSString, UIViewController;
@protocol FBAdContentContainer, FBRewardedVideoAdEndViewDelegate;

@interface FBRewardedVideoAdEndView : UIView <FBAdCommandProcessorDelegate, FBAdViewNavigationPolicy, FBAdContentContainerDelegate>
{
    _Bool _modalViewPresenting;
    _Bool _forceUIWebView;
    _Bool _isAutoRotateEnabled;
    UIViewController *_rootViewController;
    id <FBRewardedVideoAdEndViewDelegate> _delegate;
    FBRewardedVideoAdDataModel *_rewardedVideoDataModel;
    id <FBAdContentContainer> _contentContainer;
    long long _minViewabilityPercentage;
    NSString *_placementID;
    FBAdCommandProcessor *_commandHandler;
}

@property(nonatomic) _Bool isAutoRotateEnabled; // @synthesize isAutoRotateEnabled=_isAutoRotateEnabled;
@property(nonatomic) _Bool forceUIWebView; // @synthesize forceUIWebView=_forceUIWebView;
@property(retain, nonatomic) FBAdCommandProcessor *commandHandler; // @synthesize commandHandler=_commandHandler;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(retain, nonatomic) id <FBAdContentContainer> contentContainer; // @synthesize contentContainer=_contentContainer;
@property(readonly, nonatomic) FBRewardedVideoAdDataModel *rewardedVideoDataModel; // @synthesize rewardedVideoDataModel=_rewardedVideoDataModel;
@property(nonatomic) __weak id <FBRewardedVideoAdEndViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isModalViewPresenting) _Bool modalViewPresenting; // @synthesize modalViewPresenting=_modalViewPresenting;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)handleClickWithExtraData:(id)arg1;
- (_Bool)processFBAdSchemeLink:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (_Bool)isFBAdScheme:(id)arg1;
- (_Bool)processRequestURL:(id)arg1 adDataModel:(id)arg2 withExtraData:(id)arg3;
- (void)adDidFailToLoadWithError:(id)arg1;
- (void)adDidLogClick;
- (void)adWillLogImpression;
- (void)adDidLoad;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)setupNotification;
- (void)setFrameOnShow:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 minViewability:(long long)arg3 rootViewController:(id)arg4 orientation:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

