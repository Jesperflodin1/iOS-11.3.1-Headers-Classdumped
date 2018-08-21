/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@interface ASMessagesProvider.UpdatesCollectionViewDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	 presenter;
	 artworkLoader;
	 pageTraits;

}

@property (readonly,nonatomic) BOOL shouldShowEmptyStateView; 
@property (retain,nonatomic) id<_TtP18ASMessagesProvider20PageTraitEnvironment_> pageTraits; 
@property (readonly,nonatomic) BOOL isCompact; 
-(BOOL)shouldShowDividerForItemAt:(id)arg1 ;
-(BOOL)shouldShowEmptyStateView;
-(CGSize)collectionView:(id)arg1 sizeForDividerViewIn:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 sizeForEmptyStateViewIn:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldProvideBackgroundAt:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForBackgroundAt:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)viewWillTransitionTo:(CGSize)arg1 with:(id)arg2 pageTraits:(id)arg3 in:(id)arg4 ;
-(void)traitCollectionDidChangeFrom:(id)arg1 toPageTraits:(id)arg2 in:(id)arg3 ;
-(void)updateWhatsNewHandlersIn:(id)arg1 ;
-(id<_TtP18ASMessagesProvider20PageTraitEnvironment_>)pageTraits;
-(void)setPageTraits:(id<_TtP18ASMessagesProvider20PageTraitEnvironment_>)arg1 ;
-(id)init;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)isCompact;
@end
