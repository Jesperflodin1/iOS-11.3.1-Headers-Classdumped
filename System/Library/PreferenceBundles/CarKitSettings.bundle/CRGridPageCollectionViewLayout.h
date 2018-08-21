/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;

@interface CRGridPageCollectionViewLayout : UICollectionViewLayout {

	unsigned long long _columns;
	unsigned long long _rows;
	NSDictionary* _layoutInfo;

}

@property (nonatomic,retain) NSDictionary * layoutInfo;                 //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
-(id)_attributesForItemAtIndexPath:(id)arg1 ;
-(id)initWithColumns:(unsigned long long)arg1 rows:(unsigned long long)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(unsigned long long)rows;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2 ;
-(NSDictionary *)layoutInfo;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
-(CGRect)_frameForSection:(unsigned long long)arg1 ;
-(unsigned long long)columns;
@end

