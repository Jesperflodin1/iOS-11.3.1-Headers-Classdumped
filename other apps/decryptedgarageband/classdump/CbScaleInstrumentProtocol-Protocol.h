//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CbScaleDescriptor;

@protocol CbScaleInstrumentProtocol
- (void)scaleDescriptorChanged:(CbScaleDescriptor *)arg1;
- (CbScaleDescriptor *)currentScaleDescriptor;
- (_Bool)currentSongKeyIsMajor;

@optional
- (void)unregisterScaleDescriptor:(CbScaleDescriptor *)arg1;
- (void)registerScaleDescriptor:(CbScaleDescriptor *)arg1;
@end

