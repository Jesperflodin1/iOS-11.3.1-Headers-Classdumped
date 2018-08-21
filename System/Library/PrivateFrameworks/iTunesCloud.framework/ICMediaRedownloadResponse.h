/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, ICURLBag, NSDictionary, ICStoreDialogResponse, NSString, NSArray, NSData;

@interface ICMediaRedownloadResponse : NSObject {

	NSDate* _requestDate;
	ICURLBag* _urlBag;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,readonly) BOOL shouldCancelPurchaseBatch; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) unsigned downloadQueueItemCount; 
@property (nonatomic,copy,readonly) NSString * jingleAction; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
-(NSArray *)items;
-(long long)status;
-(NSData *)subscriptionKeyBagData;
-(BOOL)shouldCancelPurchaseBatch;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(BOOL)authorized;
-(unsigned)downloadQueueItemCount;
-(NSString *)jingleAction;
-(NSDictionary *)responseDictionary;
-(ICStoreDialogResponse *)dialog;
@end

