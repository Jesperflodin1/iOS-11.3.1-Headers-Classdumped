//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ABThumbnailGenerator : NSObject
{
}

+ (struct CGImage *)newSquircleMaskForSize:(struct CGSize)arg1 borderWidth:(double)arg2;
+ (id)squircleBezierPathInRect:(struct CGRect)arg1;
+ (id)thumbnailForPeers:(id)arg1 ports:(id)arg2 numberOfPipelines:(unsigned long long)arg3 backgroundColor:(id)arg4 roundedCornersForSubIcons:(_Bool)arg5 applySquircleMask:(_Bool)arg6 showsDestinations:(_Bool)arg7;

@end
