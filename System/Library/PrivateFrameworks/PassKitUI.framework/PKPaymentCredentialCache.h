/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentCredential, UIImage, PKPaymentPass;

@interface PKPaymentCredentialCache : NSObject {

	BOOL _isSelected;
	PKPaymentCredential* _credential;
	UIImage* _passSnapshot;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) PKPaymentCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) UIImage * passSnapshot;                        //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                   //@synthesize paymentPass=_paymentPass - In the implementation block
-(PKPaymentCredential *)credential;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(PKPaymentPass *)paymentPass;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
@end
