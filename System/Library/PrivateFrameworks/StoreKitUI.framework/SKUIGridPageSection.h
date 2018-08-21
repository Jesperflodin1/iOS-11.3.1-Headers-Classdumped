/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIEmbeddedMediaViewDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>

@class NSMapTable, SKUIClientContext, NSMutableIndexSet, SKUIMissingItemLoader, NSString, SKUIProductPageOverlayController, SKUIVideoImageDataConsumer, NSMutableDictionary, SKUIGridComponent;

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {

	NSMapTable* _artworkRequests;
	SKUIClientContext* _clientContext;
	BOOL _containsLockups;
	NSMapTable* _editorialLayouts;
	NSMutableIndexSet* _hiddenIconIndexSet;
	BOOL _isLandscape;
	BOOL _isPad;
	CGSize _lockupImageBoundingSize;
	SKUIMissingItemLoader* _missingItemLoader;
	NSString* _moreButtonTitle;
	long long _numberOfColumns;
	SKUIProductPageOverlayController* _overlayController;
	long long _overlaySourceItemIndex;
	long long _screenScale;
	NSMapTable* _lockupArtworkContexts;
	SKUIVideoImageDataConsumer* _videoImageDataConsumer;
	NSMutableDictionary* _videoPlaceholderImages;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)willHideInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1 ;
-(void)collectionViewDidTapVideoAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2 ;
-(id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2 ;
-(id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2 ;
-(id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2 ;
-(double)_heightForEditorialAtIndexPath:(id)arg1 ;
-(double)_heightForEditorialLockupAtIndexPath:(id)arg1 ;
-(double)_heightForLockupAtIndexPath:(id)arg1 gridType:(long long)arg2 ;
-(double)_heightForMediaAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)_contentInsetForVideoLockupIndex:(long long)arg1 ;
-(void)_setPositionForClickEvent:(id)arg1 withElementIndex:(long long)arg2 ;
-(id)_itemForIndex:(long long)arg1 ;
-(void)_selectItem:(id)arg1 withIndex:(long long)arg2 ;
-(void)_enumerateVisibleIndexPathsWithBlock:(/*^block*/id)arg1 ;
-(void)_loadImageForItem:(id)arg1 lockupSize:(long long)arg2 loader:(id)arg3 reason:(long long)arg4 ;
-(void)_loadImageForVideo:(id)arg1 thumbnailSize:(CGSize)arg2 loader:(id)arg3 reason:(long long)arg4 ;
-(void)_enumerateItemsFromStartIndex:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_editorialLayoutForLockup:(id)arg1 ;
-(id)_editorialLayoutForEditorial:(id)arg1 ;
-(long long)_numberOfLandscapeColumnsWithGridType:(long long)arg1 ;
-(long long)_numberOfPortraitColumnsWithGridType:(long long)arg1 ;
-(void)_updateVisibileEditorialWithEditorialOrientation:(long long)arg1 ;
-(void)_enumerateVisibleItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3 ;
-(void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3 ;
-(id)_artworkContextForLockupSize:(long long)arg1 ;
-(double)_heightForEditorialLockup:(id)arg1 ;
-(double)_mediaWidthForMediaIndex:(long long)arg1 gridWidth:(double)arg2 ;
-(double)_heightForMedia:(id)arg1 width:(double)arg2 ;
-(UIEdgeInsets)_contentInsetForMediaIndex:(long long)arg1 ;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(long long)arg2 ;
-(id)_cellImageForItem:(id)arg1 lockupSize:(long long)arg2 ;
-(id)_videoThumbnailImageForVideo:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(void)_showProductPageWithItem:(id)arg1 index:(long long)arg2 animated:(BOOL)arg3 ;
-(long long)numberOfCells;
@end

