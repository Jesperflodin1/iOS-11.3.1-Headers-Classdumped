/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class _TVShelfLayoutHelper, NSArray;

@interface _TVShelfViewLayout : UICollectionViewLayout {

	double _minimumInteritemSpacing;
	double _minimumLineSpacing;
	long long _rowCount;
	double _headerSelectionMargin;
	double _headerBottomMargin;
	_TVShelfLayoutHelper* _layoutHelper;
	NSArray* _shelfLayoutSections;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) _TVShelfLayoutHelper * layoutHelper;              //@synthesize layoutHelper=_layoutHelper - In the implementation block
@property (nonatomic,retain) NSArray * shelfLayoutSections;                    //@synthesize shelfLayoutSections=_shelfLayoutSections - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                   //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) double minimumLineSpacing;                        //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) long long rowCount;                               //@synthesize rowCount=_rowCount - In the implementation block
@property (assign,nonatomic) CGSize headerReferenceSize;                       //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) double headerSelectionMargin;                     //@synthesize headerSelectionMargin=_headerSelectionMargin - In the implementation block
@property (assign,nonatomic) double headerBottomMargin;                        //@synthesize headerBottomMargin=_headerBottomMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                        //@synthesize sectionInset=_sectionInset - In the implementation block
+(double)defaultHeaderSelectionMargin;
-(long long)rowCount;
-(id)init;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)itemSize;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(UIEdgeInsets)sectionInset;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(CGSize)headerReferenceSize;
-(void)setRowCount:(long long)arg1 ;
-(long long)computedRowCount;
-(double)headerSelectionMargin;
-(double)headerBottomMargin;
-(void)setHeaderSelectionMargin:(double)arg1 ;
-(NSArray *)shelfLayoutSections;
-(_TVShelfLayoutHelper *)layoutHelper;
-(void)setLayoutHelper:(_TVShelfLayoutHelper *)arg1 ;
-(void)setShelfLayoutSections:(NSArray *)arg1 ;
-(BOOL)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2 ;
-(double)computedContentHeight;
-(CGRect)boundingSelectionFrameForFrame:(CGRect)arg1 ;
-(void)setHeaderBottomMargin:(double)arg1 ;
@end
