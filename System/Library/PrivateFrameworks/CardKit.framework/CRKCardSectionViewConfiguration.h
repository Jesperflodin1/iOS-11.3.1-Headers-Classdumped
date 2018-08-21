/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCardSection, CRKCardSectionView, CRKFeedbackDelegateProxying;
@class UIView, NSString;

@interface CRKCardSectionViewConfiguration : NSObject {

	id<CRCardSection> _cardSection;
	UIView*<CRKCardSectionView> _cardSectionView;
	id<CRKFeedbackDelegateProxying> _feedbackDelegateProxy;
	NSString* _providerIdentifier;

}

@property (setter=_setProviderIdentifier:,getter=_providerIdentifier,nonatomic,copy) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,retain) id<CRCardSection> cardSection;                                                                      //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,retain) UIView*<CRKCardSectionView> cardSectionView;                                                        //@synthesize cardSectionView=_cardSectionView - In the implementation block
@property (nonatomic,retain) id<CRKFeedbackDelegateProxying> feedbackDelegateProxy;                                              //@synthesize feedbackDelegateProxy=_feedbackDelegateProxy - In the implementation block
-(void)_setProviderIdentifier:(id)arg1 ;
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(void)setCardSectionView:(UIView*<CRKCardSectionView>)arg1 ;
-(UIView*<CRKCardSectionView>)cardSectionView;
-(id<CRKFeedbackDelegateProxying>)feedbackDelegateProxy;
-(id)_providerIdentifier;
-(void)setFeedbackDelegateProxy:(id<CRKFeedbackDelegateProxying>)arg1 ;
@end
