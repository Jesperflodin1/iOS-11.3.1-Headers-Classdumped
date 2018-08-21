/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, PSQuotaInfo, NSString;

@interface QuotaInfoResponse : AAResponse {

	BOOL _basicAccount;
	NSDictionary* _quotaInfoDict;
	NSDictionary* _storageInfo;
	NSDictionary* _accountStatus;
	NSDictionary* _urls;
	NSArray* _topToolbarItems;
	NSArray* _otherToolbarItems;
	BOOL _detailed;
	PSQuotaInfo* _quotaInfo;

}

@property (nonatomic,readonly) NSString * manageStorageURLString; 
@property (nonatomic,readonly) NSString * appDetailsURLString; 
@property (nonatomic,readonly) NSString * totalStorageText; 
@property (nonatomic,readonly) NSString * availableStorageText; 
@property (nonatomic,readonly) NSDictionary * accountStatus;                   //@synthesize accountStatus=_accountStatus - In the implementation block
@property (getter=isDetailed,nonatomic,readonly) BOOL detailed;                //@synthesize detailed=_detailed - In the implementation block
@property (nonatomic,retain,readonly) PSQuotaInfo * quotaInfo;                 //@synthesize quotaInfo=_quotaInfo - In the implementation block
-(id)storageFooter:(BOOL)arg1 ;
-(NSString *)totalStorageText;
-(NSString *)availableStorageText;
-(BOOL)hasPurchasedMoreStorage;
-(NSString *)manageStorageURLString;
-(NSString *)appDetailsURLString;
-(id)_sizeStringFromBytes:(id)arg1 ;
-(unsigned long long)availableStorage;
-(BOOL)isDetailed;
-(unsigned long long)totalStorage;
-(unsigned long long)usedStorage;
-(PSQuotaInfo *)quotaInfo;
-(NSDictionary *)accountStatus;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

