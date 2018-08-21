/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <libobjc.A.dylib/SKUIAdvertisingSelectable.h>
#import <libobjc.A.dylib/SKUIAdvertisingSelectionForardingTargetAction.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUIPerspectiveView;
@class NSString, NSHashTable, SKUIBackgroundImageWrapperForHorizontalLockup, SKUICardViewElement, NSMapTable, SKUICardLayout, UIView, SKUIViewElement, SKUISizeValue, CALayer;

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIAdvertisingSelectable, SKUIAdvertisingSelectionForardingTargetAction, SKUIPerspectiveView, SKUIViewElementView> {

	NSHashTable* _artworkRelatedChildViewElementViews;
	id<SKUIPerspectiveView> _backgroundViewWithParallax;
	SKUIBackgroundImageWrapperForHorizontalLockup* _backgroundWrapper;
	SKUICardViewElement* _cardElement;
	BOOL _hasBottomAlignedItems;
	NSMapTable* _imageViewToImageResourceCacheKey;
	BOOL _isActivityCard;
	SKUICardLayout* _layout;
	UIView* _programmedCardBackgroundView;
	SKUIViewElement* _productImageElement;
	NSMapTable* _viewElements;
	SKUISizeValue* _artworkBoundingSize;
	UIView* _adCardBackgroundView;
	CALayer* _compactAdCardHairlineLayer;

}

@property (nonatomic,retain) UIView * adCardBackgroundView;                     //@synthesize adCardBackgroundView=_adCardBackgroundView - In the implementation block
@property (nonatomic,retain) CALayer * compactAdCardHairlineLayer;              //@synthesize compactAdCardHairlineLayer=_compactAdCardHairlineLayer - In the implementation block
@property (nonatomic,copy) SKUISizeValue * artworkBoundingSize;                 //@synthesize artworkBoundingSize=_artworkBoundingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * lineItem; 
@property (nonatomic,readonly) NSString * impressionIdentifier; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(double)_defaultWidthForLockupWithContext:(id)arg1 ;
+(CGSize)artworkBoundingSizeWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_imageTapAction:(id)arg1 ;
-(void)setArtworkBoundingSize:(SKUISizeValue *)arg1 ;
-(UIView *)adCardBackgroundView;
-(CALayer *)compactAdCardHairlineLayer;
-(double)_dividerHeight:(id)arg1 ;
-(void)_performDefaultActionForViewElement:(id)arg1 ;
-(NSString *)lineItem;
-(NSString *)impressionIdentifier;
-(void)skuiadvertising_advertSelectionEventShouldBeForwarded:(id)arg1 ;
-(SKUISizeValue *)artworkBoundingSize;
-(void)setAdCardBackgroundView:(UIView *)arg1 ;
-(void)setCompactAdCardHairlineLayer:(CALayer *)arg1 ;
@end

