/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBReportConcern : PBCodable <NSCopying> {

	int _articleFeedCellHostType;
	int _articleFeedCellSection;
	NSString* _articleParentFeedId;
	int _articleParentFeedType;
	int _backendArticleVersion;
	NSString* _clientId;
	NSString* _concernComments;
	int _concernReason;
	NSString* _contentId;
	int _contentType;
	int _feedFeedType;
	NSString* _feedPresentationSearchString;
	int _feedViewPresentationReason;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	int _reportVersion;
	NSString* _userId;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT17 _has;

}

@property (assign,nonatomic) int reportVersion;                                    //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                                  //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) BOOL hasConcernReason; 
@property (assign,nonatomic) int concernReason;                                    //@synthesize concernReason=_concernReason - In the implementation block
@property (nonatomic,readonly) BOOL hasConcernComments; 
@property (nonatomic,retain) NSString * concernComments;                           //@synthesize concernComments=_concernComments - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                                 //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                       //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                          //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                            //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleParentFeedId; 
@property (nonatomic,retain) NSString * articleParentFeedId;                       //@synthesize articleParentFeedId=_articleParentFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleParentFeedType; 
@property (assign,nonatomic) int articleParentFeedType;                            //@synthesize articleParentFeedType=_articleParentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedFeedType; 
@property (assign,nonatomic) int feedFeedType;                                     //@synthesize feedFeedType=_feedFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasArticleFeedCellHostType; 
@property (assign,nonatomic) int articleFeedCellHostType;                          //@synthesize articleFeedCellHostType=_articleFeedCellHostType - In the implementation block
@property (assign,nonatomic) BOOL hasArticleFeedCellSection; 
@property (assign,nonatomic) int articleFeedCellSection;                           //@synthesize articleFeedCellSection=_articleFeedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasFeedViewPresentationReason; 
@property (assign,nonatomic) int feedViewPresentationReason;                       //@synthesize feedViewPresentationReason=_feedViewPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedPresentationSearchString; 
@property (nonatomic,retain) NSString * feedPresentationSearchString;              //@synthesize feedPresentationSearchString=_feedPresentationSearchString - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                          //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                    //@synthesize userId=_userId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)contentType;
-(NSString *)contentId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(int)feedViewPresentationReason;
-(void)setFeedViewPresentationReason:(int)arg1 ;
-(void)setHasFeedViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedViewPresentationReason;
-(id)feedViewPresentationReasonAsString:(int)arg1 ;
-(int)StringAsFeedViewPresentationReason:(id)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)isUserSubscribedToFeed;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)setClientId:(NSString *)arg1 ;
-(void)setConcernComments:(NSString *)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setArticleParentFeedId:(NSString *)arg1 ;
-(void)setFeedPresentationSearchString:(NSString *)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasClientId;
-(int)concernReason;
-(void)setConcernReason:(int)arg1 ;
-(void)setHasConcernReason:(BOOL)arg1 ;
-(BOOL)hasConcernReason;
-(BOOL)hasConcernComments;
-(id)contentTypeAsString:(int)arg1 ;
-(int)StringAsContentType:(id)arg1 ;
-(BOOL)hasContentId;
-(BOOL)hasArticleParentFeedId;
-(int)articleParentFeedType;
-(void)setArticleParentFeedType:(int)arg1 ;
-(void)setHasArticleParentFeedType:(BOOL)arg1 ;
-(BOOL)hasArticleParentFeedType;
-(id)articleParentFeedTypeAsString:(int)arg1 ;
-(int)StringAsArticleParentFeedType:(id)arg1 ;
-(int)feedFeedType;
-(void)setFeedFeedType:(int)arg1 ;
-(void)setHasFeedFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedFeedType;
-(id)feedFeedTypeAsString:(int)arg1 ;
-(int)StringAsFeedFeedType:(id)arg1 ;
-(int)articleFeedCellHostType;
-(void)setArticleFeedCellHostType:(int)arg1 ;
-(void)setHasArticleFeedCellHostType:(BOOL)arg1 ;
-(BOOL)hasArticleFeedCellHostType;
-(id)articleFeedCellHostTypeAsString:(int)arg1 ;
-(int)StringAsArticleFeedCellHostType:(id)arg1 ;
-(int)articleFeedCellSection;
-(void)setArticleFeedCellSection:(int)arg1 ;
-(void)setHasArticleFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasArticleFeedCellSection;
-(id)articleFeedCellSectionAsString:(int)arg1 ;
-(int)StringAsArticleFeedCellSection:(id)arg1 ;
-(BOOL)hasFeedPresentationSearchString;
-(BOOL)hasUserId;
-(int)reportVersion;
-(void)setReportVersion:(int)arg1 ;
-(NSString *)clientId;
-(NSString *)concernComments;
-(NSString *)articleParentFeedId;
-(NSString *)feedPresentationSearchString;
-(NSString *)userId;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setContentType:(int)arg1 ;
@end

