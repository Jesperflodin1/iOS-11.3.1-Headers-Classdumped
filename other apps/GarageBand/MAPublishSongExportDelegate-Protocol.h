//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol MAPublishSongExport;

@protocol MAPublishSongExportDelegate <NSObject>
- (void)songExport:(id <MAPublishSongExport>)arg1 progress:(double)arg2;
- (void)songExportDidFail:(id <MAPublishSongExport>)arg1 error:(NSError *)arg2;
- (void)songExportDidCancel:(id <MAPublishSongExport>)arg1;
- (void)songExportDidFinish:(id <MAPublishSongExport>)arg1;
@end

