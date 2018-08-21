/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse {

	PKServiceProviderPurchase* _updatedPurchase;

}

@property (nonatomic,retain,readonly) PKServiceProviderPurchase * updatedPurchase;              //@synthesize updatedPurchase=_updatedPurchase - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKServiceProviderPurchase *)updatedPurchase;
@end

