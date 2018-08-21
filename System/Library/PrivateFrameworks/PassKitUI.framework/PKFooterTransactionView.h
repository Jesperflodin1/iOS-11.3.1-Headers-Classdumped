/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKPeerPaymentContactResolverDelegate.h>

@class PKStackedTextItemGroup, PKStackedTextItemGroupView, UIView, UIImageView, PKPaymentPass, PKPaymentTransaction, PKTransitPassProperties, PKPeerPaymentContactResolver, NSString;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate> {

	PKStackedTextItemGroup* _displayItem;
	PKStackedTextItemGroupView* _headerView;
	UIView* _separatorView;
	PKStackedTextItemGroupView* _contentView;
	UIImageView* _imageView;
	BOOL _animated;
	unsigned long long _deferUpdateCounter;
	BOOL _needsContentUpdate;
	PKPaymentPass* _pass;
	PKPaymentTransaction* _transaction;
	PKTransitPassProperties* _transitProperties;
	PKPeerPaymentContactResolver* _peerPaymentContactResolver;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKTransitPassProperties * transitProperties;                            //@synthesize transitProperties=_transitProperties - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentContactResolver * peerPaymentContactResolver;              //@synthesize peerPaymentContactResolver=_peerPaymentContactResolver - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(void)layoutSubviews;
-(id)_image;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)beginUpdates;
-(BOOL)hasContent;
-(PKPaymentPass *)pass;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(id)_merchantText;
-(id)_locationText;
-(id)_statusText;
-(id)_relativeDateText;
-(id)_peerPaymentCounterpart;
-(BOOL)_strikethroughAmount;
-(BOOL)_deemphasizeAmount;
-(void)_updateContentAnimated:(BOOL)arg1 ;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 peerPaymentContactResolver:(id)arg2 ;
-(void)setPass:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransitProperties:(id)arg1 animated:(BOOL)arg2 ;
-(void)endUpdates:(BOOL)arg1 ;
-(PKTransitPassProperties *)transitProperties;
-(PKPeerPaymentContactResolver *)peerPaymentContactResolver;
@end

