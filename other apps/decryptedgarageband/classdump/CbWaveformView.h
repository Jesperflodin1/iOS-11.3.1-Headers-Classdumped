//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol CbWaveformViewDatasourceProtocol;

@interface CbWaveformView : UIView
{
    double _autoScaleZoom;
    unsigned long long _loopCount;
    struct CGPath *_cachedPath;
    _Bool _needsCachedPathUpdate;
    struct CGRect _oldBounds;
    _Bool _reverse;
    id <CbWaveformViewDatasourceProtocol> _dataSource;
    long long _autoscaleMode;
    double _startOffset;
    double _yOffset;
    double _zoom;
    UIColor *_waveformColor;
    double _frontShading;
    double _rearShading;
    UIColor *_shadedWaveformColor;
}

+ (Class)layerClass;
@property(nonatomic) UIColor *shadedWaveformColor; // @synthesize shadedWaveformColor=_shadedWaveformColor;
@property(nonatomic) double rearShading; // @synthesize rearShading=_rearShading;
@property(nonatomic) double frontShading; // @synthesize frontShading=_frontShading;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) UIColor *waveformColor; // @synthesize waveformColor=_waveformColor;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) long long autoscaleMode; // @synthesize autoscaleMode=_autoscaleMode;
@property(nonatomic) id <CbWaveformViewDatasourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void)drawRect:(struct CGRect)arg1;
- (void)draw:(struct CGRect)arg1;
- (void)drawPath;
- (void)drawShadingRects;
- (void)reverseContext;
- (void)_recalculateCachedPath;
- (void)_invalidateCachedPath;
- (CDStruct_c4e36f22)_interpolatedTupleForIndex:(unsigned long long)arg1 fromData:(const char *)arg2 countOfTuples:(unsigned long long)arg3;
- (void)reloadWaveFormData;
- (double)_internalZoom;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

