//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CbSongCollectionManager, NSError, UIImage;

@protocol CbSongCollectionManagerDelegate <NSObject>
- (void)songCollectionManager:(CbSongCollectionManager *)arg1 operation:(int)arg2 failedWithError:(NSError *)arg3;
- (_Bool)songCollectionManager:(CbSongCollectionManager *)arg1 operation:(int)arg2 progress:(float)arg3;
- (void)songCollectionManager:(CbSongCollectionManager *)arg1 operationComplete:(int)arg2 userInfo:(id)arg3;

@optional
- (UIImage *)stillImageToUseForVideoExport;
@end

