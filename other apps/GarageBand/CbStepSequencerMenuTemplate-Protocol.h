//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, UIColor;

@protocol CbStepSequencerMenuTemplate <NSObject>
@property(readonly, nonatomic) UIColor *backgroundColorForPopover;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) _Bool navigationBarHidden;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) _Bool showsScrollBar;
@property(readonly, nonatomic) NSMutableArray *itemsInSections;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) struct CGSize itemSize;
@property(readonly, nonatomic) double itemCountForEqualDistribution;
@property(readonly, nonatomic) unsigned long long itemSizeType;
- (void)reloadValues;
- (_Bool)shouldNopSelectionForSelectedCell;
- (void (^)(UICollectionViewFlowLayout *))layoutConfigurationBlock;
- (_Bool (^)(NSIndexPath *))cellIsSelectedBlock;
- (void (^)(NSIndexPath *, UIView *))cellSelectionBlock;
- (void (^)(UICollectionViewCell *, NSIndexPath *, _Bool))cellConfigurationBlock;
- (struct UIEdgeInsets)sectionInsets:(long long)arg1;
- (Class)cellClass;
@end
