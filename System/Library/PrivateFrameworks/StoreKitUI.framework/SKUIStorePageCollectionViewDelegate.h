/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>
@optional
-(void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
-(id)backgroundColorForSection:(long long)arg1;
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
-(id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
-(id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;

@end
