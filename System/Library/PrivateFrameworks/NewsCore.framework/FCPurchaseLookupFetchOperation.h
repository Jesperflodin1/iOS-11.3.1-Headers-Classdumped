/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class NSArray, FCPurchaseLookupRecordSource;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation {

	NSArray* _purchaseIDs;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;

}

@property (nonatomic,retain) NSArray * purchaseIDs;                                                  //@synthesize purchaseIDs=_purchaseIDs - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;              //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
-(id)init;
-(void)performOperation;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2 ;
-(NSArray *)purchaseIDs;
-(id)_prefixedPurchasedIDs:(id)arg1 ;
-(id)processFetchedResults:(id)arg1 ;
-(void)setPurchaseIDs:(NSArray *)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
@end

