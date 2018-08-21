/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
@required
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4;
-(CKFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4;
-(CKFeedSeparatorMetrics*)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4;
-(double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;

@end

