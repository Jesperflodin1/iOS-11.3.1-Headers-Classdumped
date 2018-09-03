//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"

@class FBDisplayAdController, NSString;
@protocol FBInterstitialAdDelegate;

@interface FBInterstitialAd : NSObject <FBDisplayAdControllerDelegate>
{
    _Bool _initialized;
    _Bool _ready;
    NSString *_placementID;
    id <FBInterstitialAdDelegate> _delegate;
    FBDisplayAdController *_adController;
    unsigned long long _showCount;
    unsigned long long _maxShowCount;
}

@property(nonatomic) unsigned long long maxShowCount; // @synthesize maxShowCount=_maxShowCount;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak id <FBInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdControllerUserClosed:(id)arg1;
- (void)displayAdController:(id)arg1 clickThruWithURL:(id)arg2;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerLoaded:(id)arg1;
- (void)displayAdController:(id)arg1 presentedView:(id)arg2;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAd;
- (id)initWithPlacementID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

