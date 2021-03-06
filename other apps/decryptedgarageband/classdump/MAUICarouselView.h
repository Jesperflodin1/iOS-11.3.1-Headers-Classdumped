//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MAAssetManagerMixInParentProtocol-Protocol.h"

@class CALayer, MAAssetManagerMixIn, NSMutableArray, NSString, UIImage;
@protocol MAUICarouselViewDataSource, MAUICarouselViewDelegate;

@interface MAUICarouselView : UIView <MAAssetManagerMixInParentProtocol>
{
    id <MAUICarouselViewDataSource> _dataSource;
    id <MAUICarouselViewDelegate> _delegate;
    NSMutableArray *_layers;
    struct CGSize _itemLayerSize;
    double _touchStartPosX;
    double _currentAngle;
    double _touchStartAngle;
    double _lastTouchPosX;
    double _touchDirection;
    _Bool _touchIsDirected;
    double _totalTouchDistance;
    _Bool _useBlackBackground;
    MAAssetManagerMixIn *_assetManagerMixIn;
    double _radius;
    double _slopeAngle;
    double _centerY;
    double _backItemAlpha;
    UIImage *_backgroundImage;
    double _itemWidth;
    double _perspectiveFactor;
}

+ (id)assetSetFamily;
@property(nonatomic) double perspectiveFactor; // @synthesize perspectiveFactor=_perspectiveFactor;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) _Bool useBlackBackground; // @synthesize useBlackBackground=_useBlackBackground;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double backItemAlpha; // @synthesize backItemAlpha=_backItemAlpha;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double slopeAngle; // @synthesize slopeAngle=_slopeAngle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) id <MAUICarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <MAUICarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)assetSetFamily;
- (_Bool)tryInitializationOnAssetChange;
- (void)assetSetHasChanged:(id)arg1;
@property(retain, nonatomic) MAAssetManagerMixIn *assetManagerMixIn; // @synthesize assetManagerMixIn=_assetManagerMixIn;
@property(retain, nonatomic) NSString *resourceBundleID;
@property(retain, nonatomic) NSString *assetSetPath;
- (void)setAssetSet:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) long long frontItemIndex;
- (void)setAngle:(double)arg1 animated:(_Bool)arg2;
- (void)reloadData;
@property(readonly, nonatomic) CALayer *frontLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

