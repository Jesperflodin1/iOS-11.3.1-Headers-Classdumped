//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol ECScaling
@property(nonatomic) double scale;
@property(readonly) _Bool isScalable;
- (struct CGSize)sizeForScale:(double)arg1;
- (void)setScale:(double)arg1 andResizeView:(_Bool)arg2;
@end
