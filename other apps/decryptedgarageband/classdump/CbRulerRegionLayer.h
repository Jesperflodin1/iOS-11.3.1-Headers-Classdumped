//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbRegionLayer.h"

@class NSDictionary;

@interface CbRulerRegionLayer : CbRegionLayer
{
    _Bool _supportsSelected;
    NSDictionary *_assetSet;
    _Bool _isDrummer;
}

- (void).cxx_destruct;
- (void)_updateRegionContents;
- (void)_regionSelectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithRegion:(id)arg1 overviewEnabled:(_Bool)arg2;

@end

