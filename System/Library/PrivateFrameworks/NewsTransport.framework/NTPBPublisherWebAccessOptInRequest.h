/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying> {

	NSString* _channelId;
	NSString* _country;
	NSString* _email;
	NSString* _iapId;
	NSString* _language;
	NSString* _purchaseReceipt;

}

@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                    //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,readonly) BOOL hasEmail; 
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseReceipt; 
@property (nonatomic,retain) NSString * purchaseReceipt;              //@synthesize purchaseReceipt=_purchaseReceipt - In the implementation block
@property (nonatomic,readonly) BOOL hasIapId; 
@property (nonatomic,retain) NSString * iapId;                        //@synthesize iapId=_iapId - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;                      //@synthesize country=_country - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasCountry;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasChannelId;
-(BOOL)hasEmail;
-(BOOL)hasPurchaseReceipt;
-(BOOL)hasIapId;
-(NSString *)iapId;
-(NSString *)purchaseReceipt;
-(void)setEmail:(NSString *)arg1 ;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setIapId:(NSString *)arg1 ;
-(NSString *)channelId;
-(NSString *)email;
@end

