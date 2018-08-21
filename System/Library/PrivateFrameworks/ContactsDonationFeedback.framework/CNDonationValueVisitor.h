/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationValueVisitor <NSObject>
@required
-(void)visitDonationValue:(id)arg1 nameComponents:(id)arg2;
-(void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3;
-(void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3;
-(void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4;
-(void)visitDonationValue:(id)arg1 imageData:(id)arg2;

@end

