//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAdContentContainer-Protocol.h"

@class FBAdDataModel, FBAdViewInternal, NSString;
@protocol FBAdContentContainerDelegate;

@interface FBAdContentContainer : NSObject <FBAdContentContainer>
{
    FBAdViewInternal *_parent;
    NSObject<FBAdContentContainerDelegate> *_delegate;
    FBAdDataModel *_offsiteAd;
    struct CGSize _actualAdSize;
    struct FBAdSize _adSizeType;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
}

@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(retain, nonatomic) FBAdDataModel *offsiteAd; // @synthesize offsiteAd=_offsiteAd;
@property(nonatomic) __weak NSObject<FBAdContentContainerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct FBAdSize adSizeType; // @synthesize adSizeType=_adSizeType;
@property(nonatomic) struct CGSize actualAdSize; // @synthesize actualAdSize=_actualAdSize;
@property(nonatomic) __weak FBAdViewInternal *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (_Bool)logClickWithExtraData:(id)arg1;
- (_Bool)logImpression;
- (_Bool)loadAdData:(id)arg1 minViewability:(int)arg2;
- (id)getView;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithAdView:(id)arg1 actualAdSize:(struct CGSize)arg2 adSizeType:(struct FBAdSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

