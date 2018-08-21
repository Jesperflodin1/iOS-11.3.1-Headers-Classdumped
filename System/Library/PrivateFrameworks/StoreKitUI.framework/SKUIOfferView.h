/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUIOfferViewDelegate;
@class NSMapTable, UIButton, NSNumber, NSMutableArray, NSString;

@interface SKUIOfferView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIViewElementView> {

	BOOL _showingConfirmation;
	BOOL _compactModeEnabled;
	id<SKUIOfferViewDelegate> _delegate;
	long long _metadataPosition;
	unsigned long long _alignment;
	NSMapTable* _buttonElements;
	NSMapTable* _buyButtonDescriptorToButton;
	NSMapTable* _notices;
	UIButton* _hlsPlayButton;
	NSNumber* _hlsID;
	NSMutableArray* _metadataViews;
	NSMutableArray* _offerButtonViews;

}

@property (assign,getter=isShowingConfirmation,nonatomic) BOOL showingConfirmation;              //@synthesize showingConfirmation=_showingConfirmation - In the implementation block
@property (assign,getter=isCompactModeEnabled,nonatomic) BOOL compactModeEnabled;                //@synthesize compactModeEnabled=_compactModeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                       //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) NSMapTable * buttonElements;                                        //@synthesize buttonElements=_buttonElements - In the implementation block
@property (nonatomic,retain) NSMapTable * buyButtonDescriptorToButton;                           //@synthesize buyButtonDescriptorToButton=_buyButtonDescriptorToButton - In the implementation block
@property (nonatomic,retain) NSMapTable * notices;                                               //@synthesize notices=_notices - In the implementation block
@property (nonatomic,retain) UIButton * hlsPlayButton;                                           //@synthesize hlsPlayButton=_hlsPlayButton - In the implementation block
@property (nonatomic,retain) NSNumber * hlsID;                                                   //@synthesize hlsID=_hlsID - In the implementation block
@property (nonatomic,retain) NSMutableArray * metadataViews;                                     //@synthesize metadataViews=_metadataViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * offerButtonViews;                                  //@synthesize offerButtonViews=_offerButtonViews - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIOfferViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long metadataPosition;                                         //@synthesize metadataPosition=_metadataPosition - In the implementation block
@property (nonatomic,readonly) NSString * offerViewStateDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAlignment:(unsigned long long)arg1 ;
-(id<SKUIOfferViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIOfferViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)alignment;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(BOOL)isCompactModeEnabled;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)setMetadataPosition:(long long)arg1 ;
-(long long)metadataPosition;
-(BOOL)isShowingConfirmation;
-(void)_sendWillAnimate;
-(void)setShowingConfirmation:(BOOL)arg1 ;
-(NSMutableArray *)offerButtonViews;
-(NSMapTable *)buttonElements;
-(NSMapTable *)buyButtonDescriptorToButton;
-(NSMutableArray *)metadataViews;
-(void)setHlsID:(NSNumber *)arg1 ;
-(UIButton *)hlsPlayButton;
-(void)setHlsPlayButton:(UIButton *)arg1 ;
-(void)setNotices:(NSMapTable *)arg1 ;
-(void)setCompactModeEnabled:(BOOL)arg1 ;
-(BOOL)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2 ;
-(void)setBuyButtonDescriptorToButton:(NSMapTable *)arg1 ;
-(NSMapTable *)notices;
-(NSNumber *)hlsID;
-(NSString *)offerViewStateDescription;
-(void)setButtonElements:(NSMapTable *)arg1 ;
-(void)setMetadataViews:(NSMutableArray *)arg1 ;
-(void)setOfferButtonViews:(NSMutableArray *)arg1 ;
@end

