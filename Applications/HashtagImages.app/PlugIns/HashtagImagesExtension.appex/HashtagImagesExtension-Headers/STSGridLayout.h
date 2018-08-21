//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSDictionary, NSMutableDictionary, NSNumber, UICollectionViewLayoutAttributes;

@interface STSGridLayout : UICollectionViewLayout
{
    NSDictionary *_headerAttributes;
    NSDictionary *_cellAttributes;
    NSDictionary *_tileAttributes;
    UICollectionViewLayoutAttributes *_footerAttributes;
    NSMutableDictionary *_tileSmallFrameCache;
    NSNumber *_hasOnlyLargeItems;
    double _contentSizeMaxY;
    double _headerHeight;
    double _footerHeight;
    double _itemSpacing;
}

@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (struct CGSize)_availableContentSize;
- (unsigned long long)_tilesPerRowAndWidth:(double *)arg1;
- (struct CGRect)_gridFrameForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2 inSize:(struct CGSize)arg3;
- (id)_tileSmallFramesForSize:(struct CGSize)arg1;
- (_Bool)_hasOnlyLargeItems;
- (void)_redistributeLastRowItemsInTiles:(id)arg1 withTilesPerRow:(unsigned long long)arg2;
- (id)_gridTilesForCurrentDataSource;
- (id)_gridLayoutDelegate;
- (long long)maximumCellsPerRow;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)init;

@end
