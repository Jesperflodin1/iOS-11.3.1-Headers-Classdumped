/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBWebAccessScreenView : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _errorCode;
	NSString* _errorMessage;
	NSString* _iadQtoken;
	int _paidSubscriptionConversionPointType;
	int _parentFeedType;
	int _resultType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	NSData* _subscriptionPurchaseSessionId;
	int _userAction;
	int _webAccessScreenPresentationReason;
	BOOL _arrivedFromAd;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT23 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                           //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                                           //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                                  //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                     //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                         //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticlePreview;                      //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedFromAd; 
@property (assign,nonatomic) BOOL arrivedFromAd;                                       //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                     //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                   //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasWebAccessScreenPresentationReason; 
@property (assign,nonatomic) int webAccessScreenPresentationReason;                    //@synthesize webAccessScreenPresentationReason=_webAccessScreenPresentationReason - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)setSectionId:(NSString *)arg1 ;
-(BOOL)hasSectionId;
-(NSString *)sectionId;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setErrorMessage:(NSString *)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)hasArticleViewingSessionId;
-(NSData *)articleViewingSessionId;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(void)setIadQtoken:(NSString *)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(BOOL)hasErrorMessage;
-(void)setSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(void)setHasArrivedFromAd:(BOOL)arg1 ;
-(BOOL)hasArrivedFromAd;
-(BOOL)hasIadQtoken;
-(BOOL)subscriptionOnlyArticlePreview;
-(BOOL)arrivedFromAd;
-(NSString *)iadQtoken;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(BOOL)hasSubscriptionPurchaseSessionId;
-(int)webAccessScreenPresentationReason;
-(void)setWebAccessScreenPresentationReason:(int)arg1 ;
-(void)setHasWebAccessScreenPresentationReason:(BOOL)arg1 ;
-(BOOL)hasWebAccessScreenPresentationReason;
-(NSData *)subscriptionPurchaseSessionId;
-(NSString *)errorMessage;
@end

