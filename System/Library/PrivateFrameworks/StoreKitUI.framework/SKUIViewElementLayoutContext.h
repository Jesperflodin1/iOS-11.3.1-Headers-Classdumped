/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkRequestDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableDictionary, SKUIBadgeTextAttachmentLoader, MPUBorderDrawingCache, NSMapTable, NSHashTable, SKUIItemOfferButton, NSMutableSet, SKUIClientContext, SKUIViewElementTextLayoutCache, UIViewController, SKUIResourceLoader, UIColor, NSString, NSCache;

@interface SKUIViewElementLayoutContext : NSObject {

	NSMutableDictionary* _aggregateValues;
	SKUIBadgeTextAttachmentLoader* _badgeImageLoader;
	MPUBorderDrawingCache* _borderDrawingCache;
	NSMapTable* _editorialLayouts;
	NSHashTable* _expandedEditorialLayouts;
	SKUIItemOfferButton* _itemOfferButton;
	NSMutableDictionary* _itemOfferButtonSizes;
	UIEdgeInsets _largeScreenElementPadding;
	NSMutableSet* _observedArtworkRequestIDs;
	NSMapTable* _blurColors;
	double _activePageWidth;
	id<SKUIArtworkRequestDelegate> _artworkRequestDelegate;
	SKUIClientContext* _clientContext;
	unsigned long long _containerViewElementType;
	SKUIViewElementTextLayoutCache* _labelLayoutCache;
	UIViewController* _parentViewController;
	SKUIResourceLoader* _resourceLoader;
	UIColor* _placeholderColor;
	UIColor* _tintColor;
	NSString* _backdropGroupName;
	double _displayScale;

}

@property (nonatomic,readonly) NSCache * placeholderImageCache; 
@property (assign,nonatomic) double activePageWidth;                                                    //@synthesize activePageWidth=_activePageWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIArtworkRequestDelegate> artworkRequestDelegate;              //@synthesize artworkRequestDelegate=_artworkRequestDelegate - In the implementation block
@property (nonatomic,readonly) SKUIBadgeTextAttachmentLoader * badgeImageLoader; 
@property (nonatomic,readonly) MPUBorderDrawingCache * borderDrawingCache; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) unsigned long long containerViewElementType;                               //@synthesize containerViewElementType=_containerViewElementType - In the implementation block
@property (nonatomic,retain) SKUIViewElementTextLayoutCache * labelLayoutCache;                         //@synthesize labelLayoutCache=_labelLayoutCache - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                            //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                                       //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                                //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets largeScreenElementPadding;                                  //@synthesize largeScreenElementPadding=_largeScreenElementPadding - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) double displayScale;                                                       //@synthesize displayScale=_displayScale - In the implementation block
+(double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3 ;
+(double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(UIViewController *)parentViewController;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)displayScale;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(UIColor *)placeholderColor;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)aggregateValueForKey:(id)arg1 ;
-(id)imageResourceCacheKeyForArtwork:(id)arg1 ;
-(id)requestIdentifierForArtwork:(id)arg1 ;
-(BOOL)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3 ;
-(id)placeholderImageForSize:(CGSize)arg1 ;
-(id)requestIdentifierForViewElement:(id)arg1 ;
-(BOOL)loadImageForImageElement:(id)arg1 reason:(long long)arg2 ;
-(CGSize)sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(id)imageResourceCacheKeyForViewElement:(id)arg1 ;
-(id)requestIdentifierForResourceCacheKey:(id)arg1 ;
-(void)setArtworkRequestDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(void)setAggregateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setContainerViewElementType:(unsigned long long)arg1 ;
-(void)setLabelLayoutCache:(SKUIViewElementTextLayoutCache *)arg1 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 ;
-(double)defaultItemWidthForViewElement:(id)arg1 ;
-(SKUIViewElementTextLayoutCache *)labelLayoutCache;
-(CGSize)sizeForImageElement:(id)arg1 ;
-(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 ;
-(double)activePageWidth;
-(id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2 ;
-(BOOL)loadImageForArtwork:(id)arg1 reason:(long long)arg2 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)_artworkRequestDidLoadImageNotification:(id)arg1 ;
-(void)invalidateAllEditorialLayouts;
-(void)setActivePageWidth:(double)arg1 ;
-(long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2 ;
-(unsigned long long)containerViewElementType;
-(id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2 ;
-(id)initWithStorePageSectionContext:(id)arg1 ;
-(BOOL)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2 ;
-(SKUIBadgeTextAttachmentLoader *)badgeImageLoader;
-(BOOL)isEditorialLayoutExpanded:(id)arg1 ;
-(id)transientRequestIdentifierForViewElement:(id)arg1 ;
-(id)dataConsumerForImageElement:(id)arg1 ;
-(BOOL)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3 ;
-(id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2 ;
-(id)blurColorForCacheKey:(id)arg1 ;
-(void)setBlurColor:(id)arg1 cacheKey:(id)arg2 ;
-(BOOL)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2 ;
-(id)_initSKUIViewElementLayoutContext;
-(void)setLargeScreenElementPaddingFromContext:(id)arg1 ;
-(NSCache *)placeholderImageCache;
-(BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4 ;
-(CGSize)_sizeForImageElement:(id)arg1 applyTransform:(BOOL)arg2 ;
-(CGSize)sizeForBadgeElement:(id)arg1 ;
-(CGSize)sizeForItemOfferButton:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 ;
-(id<SKUIArtworkRequestDelegate>)artworkRequestDelegate;
-(UIEdgeInsets)largeScreenElementPadding;
-(SKUIResourceLoader *)resourceLoader;
@end

