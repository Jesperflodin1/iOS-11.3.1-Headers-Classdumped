/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface SKUIURL : NSObject <NSCopying> {

	NSMutableDictionary* _queryDictionary;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * underlyingURL;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * actionString; 
@property (nonatomic,copy,readonly) NSDictionary * queryStringDictionary; 
@property (nonatomic,readonly) NSString * redeemCode; 
@property (nonatomic,readonly) NSString * searchTerm; 
@property (nonatomic,readonly) NSString * URLBagKey; 
@property (nonatomic,copy) NSString * referrerApplicationName;                         //@synthesize referrerApplicationName=_referrerApplicationName - In the implementation block
@property (nonatomic,copy) NSString * referrerURLString;                               //@synthesize referrerURLString=_referrerURLString - In the implementation block
-(id)newURLRequest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)actionString;
-(NSURL *)underlyingURL;
-(id)valueForQueryParameter:(id)arg1 ;
-(NSString *)referrerApplicationName;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(NSString *)referrerURLString;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(id)newURLRequestWithBaseURL:(id)arg1 ;
-(NSString *)redeemCode;
-(id)initWithURLBagKey:(id)arg1 ;
-(id)_queryDictionary;
-(id)_decodedQueryParameter:(id)arg1 ;
-(id)_searchGroupForSearchKind:(id)arg1 ;
-(id)_searchURLBagKey;
-(id)_appStoreSearchURLBagKey;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(NSDictionary *)queryStringDictionary;
-(NSString *)searchTerm;
@end

