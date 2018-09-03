//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer;

@protocol MAVeGraphLayerHostProtocol <NSObject>
- (void)setLayerVisible:(_Bool)arg1;
- (void)setNeedsLayout;
- (void)updateLayers;
- (void)tearDownLayers;
- (void)setupLayersWithSuperlayer:(CALayer *)arg1;

@optional
@property(copy, nonatomic) CDUnknownBlockType customUpdateLayers;
@property(copy, nonatomic) CDUnknownBlockType customTearDownLayers;
@property(copy, nonatomic) CDUnknownBlockType customSetupLayers;
@end

