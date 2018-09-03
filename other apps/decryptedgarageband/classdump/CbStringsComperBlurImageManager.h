//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CbFileCacheManager, NSString;

@interface CbStringsComperBlurImageManager : NSObject
{
    NSString *_skinID;
    NSString *_instrumentName;
    CbFileCacheManager *_fileCacheManager;
}

@property(retain, nonatomic) CbFileCacheManager *fileCacheManager; // @synthesize fileCacheManager=_fileCacheManager;
@property(copy, nonatomic) NSString *instrumentName; // @synthesize instrumentName=_instrumentName;
@property(copy, nonatomic) NSString *skinID; // @synthesize skinID=_skinID;
- (void).cxx_destruct;
- (id)_filenameForInstrumentName:(id)arg1 skinID:(id)arg2 index:(unsigned long long)arg3 selected:(_Bool)arg4 shifted:(_Bool)arg5;
- (void)setBlurImage:(id)arg1 forChordStripAtIndex:(unsigned long long)arg2 selected:(_Bool)arg3 shifted:(_Bool)arg4;
- (id)blurImageForChordStripAtIndex:(unsigned long long)arg1 selected:(_Bool)arg2 shifted:(_Bool)arg3;
- (id)init;

@end
