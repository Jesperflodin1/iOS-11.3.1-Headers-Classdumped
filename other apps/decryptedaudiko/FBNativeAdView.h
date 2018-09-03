//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"
#import "FBNativeAdDelegate-Protocol.h"
#import "FBNativeAdView-Protocol.h"

@class FBAdBodyView, FBAdChoicesView, FBAdNativeContentContainer, FBAdStarRatingView, FBMediaView, FBNativeAd, FBNativeAdViewAttributes, NSHashTable, NSString, UIButton, UIImageView, UILabel, UIViewController;

@interface FBNativeAdView : UIView <FBNativeAdDelegate, FBNativeAdView, FBAdUpdatableView>
{
    _Bool _loaded;
    long long _type;
    UIViewController *_viewController;
    FBNativeAd *_nativeAd;
    FBNativeAdViewAttributes *_attributes;
    UIButton *_callToActionButton;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    FBAdStarRatingView *_starRatingView;
    UILabel *_socialContextLabel;
    UIImageView *_iconImageView;
    FBMediaView *_coverImageView;
    FBAdChoicesView *_sponsoredView;
    FBAdBodyView *_bodyView;
    UIView *_containerView;
    NSHashTable *_clickableViews;
    NSHashTable *_excludedClickableViews;
    FBAdNativeContentContainer *_contentContainer;
}

+ (id)defaultAttributes;
+ (Class)classFromType:(long long)arg1;
+ (id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
+ (id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2;
+ (id)nativeAdViewWithType:(long long)arg1 withAttributes:(id)arg2;
@property(nonatomic) __weak FBAdNativeContentContainer *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) NSHashTable *excludedClickableViews; // @synthesize excludedClickableViews=_excludedClickableViews;
@property(retain, nonatomic) NSHashTable *clickableViews; // @synthesize clickableViews=_clickableViews;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak FBAdBodyView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak FBAdChoicesView *sponsoredView; // @synthesize sponsoredView=_sponsoredView;
@property(nonatomic) __weak FBMediaView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *socialContextLabel; // @synthesize socialContextLabel=_socialContextLabel;
@property(nonatomic) __weak FBAdStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(copy, nonatomic) FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) FBNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (_Bool)usesMediaView;
- (id)fixedHeight;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (id)allInteractableTargets;
- (void)resetViews;
- (void)reset;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateView:(_Bool)arg1;
- (void)constructView;
- (_Bool)implementsSelector:(SEL)arg1;
- (void)updateClickableViews;
- (void)constructBodyView;
- (void)constructSponsoredView;
- (void)constructCoverImageView;
- (void)constructIconImageView;
- (void)constructCallToActionButton;
- (void)registerView;
- (void)initializeView;
- (void)updateAttributes:(id)arg1;
- (void)populate:(id)arg1;
- (void)nativeAdDidLoad:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

