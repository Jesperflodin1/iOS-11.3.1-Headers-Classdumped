/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, NTPBWidgetEngagement;

@interface NTPBMediaView : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
	NSString* _articleId;
	NSData* _articleSessionId;
	int _articleType;
	NSData* _articleViewingSessionId;
	int _backendArticleVersion;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSMutableArray* _fractionalCohortMemberships;
	NSString* _galleryId;
	int _galleryImageCount;
	NSMutableArray* _galleryImageIds;
	int _galleryType;
	NSData* _galleryViewingSessionId;
	NSString* _iadNativeAd;
	NSString* _iadNativeCampaign;
	NSString* _iadNativeCampaignAd;
	NSString* _iadNativeLine;
	NSString* _mediaId;
	int _mediaType;
	NSString* _metadata;
	NSMutableArray* _namedEntities;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	NTPBWidgetEngagement* _widgetEngagement;
	BOOL _adSupportedChannel;
	BOOL _isDigitalReplicaAd;
	BOOL _isNativeAd;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaId; 
@property (nonatomic,retain) NSString * mediaId;                                            //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasGalleryImageCount; 
@property (assign,nonatomic) int galleryImageCount;                                         //@synthesize galleryImageCount=_galleryImageCount - In the implementation block
@property (assign,nonatomic) BOOL hasGalleryType; 
@property (assign,nonatomic) int galleryType;                                               //@synthesize galleryType=_galleryType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                       //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                       //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * galleryImageIds;                              //@synthesize galleryImageIds=_galleryImageIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                       //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryId; 
@property (nonatomic,retain) NSString * galleryId;                                          //@synthesize galleryId=_galleryId - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryViewingSessionId; 
@property (nonatomic,retain) NSData * galleryViewingSessionId;                              //@synthesize galleryViewingSessionId=_galleryViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaign; 
@property (nonatomic,retain) NSString * iadNativeCampaign;                                  //@synthesize iadNativeCampaign=_iadNativeCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeLine; 
@property (nonatomic,retain) NSString * iadNativeLine;                                      //@synthesize iadNativeLine=_iadNativeLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeAd; 
@property (nonatomic,retain) NSString * iadNativeAd;                                        //@synthesize iadNativeAd=_iadNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaignAd; 
@property (nonatomic,retain) NSString * iadNativeCampaignAd;                                //@synthesize iadNativeCampaignAd=_iadNativeCampaignAd - In the implementation block
+(Class)namedEntitiesType;
+(Class)galleryImageIdsType;
+(Class)fractionalCohortMembershipType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMetadata;
-(id)dictionaryRepresentation;
-(NSString *)metadata;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasArticleSessionId;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasPreviousArticleId;
-(BOOL)hasPreviousArticleVersion;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(NSString *)referencedArticleId;
-(BOOL)isUserSubscribedToFeed;
-(NSData *)articleSessionId;
-(NSData *)articleViewingSessionId;
-(NSString *)previousArticleId;
-(NSString *)previousArticleVersion;
-(long long)previousArticlePublisherArticleVersion;
-(void)addNamedEntities:(id)arg1 ;
-(void)addGalleryImageIds:(id)arg1 ;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(void)setGalleryId:(NSString *)arg1 ;
-(void)setGalleryViewingSessionId:(NSData *)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(void)setIadNativeCampaignAd:(NSString *)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasMediaId;
-(void)setGalleryImageCount:(int)arg1 ;
-(void)setHasGalleryImageCount:(BOOL)arg1 ;
-(BOOL)hasGalleryImageCount;
-(int)galleryType;
-(void)setGalleryType:(int)arg1 ;
-(void)setHasGalleryType:(BOOL)arg1 ;
-(BOOL)hasGalleryType;
-(id)galleryTypeAsString:(int)arg1 ;
-(int)StringAsGalleryType:(id)arg1 ;
-(int)feedCellSection;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(id)feedCellSectionAsString:(int)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(void)clearNamedEntities;
-(unsigned long long)namedEntitiesCount;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasSurfacedBySectionId;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasSectionHeadlineId;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(void)clearGalleryImageIds;
-(unsigned long long)galleryImageIdsCount;
-(id)galleryImageIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasWidgetEngagement;
-(void)clearFractionalCohortMemberships;
-(unsigned long long)fractionalCohortMembershipsCount;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(BOOL)hasIsNativeAd;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersionInt64;
-(BOOL)hasGalleryId;
-(BOOL)hasGalleryViewingSessionId;
-(BOOL)hasIadNativeCampaign;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIadNativeAd;
-(BOOL)hasIadNativeCampaignAd;
-(NSString *)mediaId;
-(int)galleryImageCount;
-(NSMutableArray *)namedEntities;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(BOOL)adSupportedChannel;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedBySectionId;
-(NSString *)surfacedByTopicId;
-(NSString *)sectionHeadlineId;
-(BOOL)isDigitalReplicaAd;
-(long long)personalizationTreatmentId;
-(NSMutableArray *)galleryImageIds;
-(void)setGalleryImageIds:(NSMutableArray *)arg1 ;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(BOOL)isNativeAd;
-(long long)publisherArticleVersionInt64;
-(long long)backendArticleVersionInt64;
-(NSString *)galleryId;
-(NSData *)galleryViewingSessionId;
-(NSString *)iadNativeCampaign;
-(NSString *)iadNativeLine;
-(NSString *)iadNativeAd;
-(NSString *)iadNativeCampaignAd;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(int)publisherArticleVersion;
-(int)backendArticleVersion;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(void)setBackendArticleVersion:(int)arg1 ;
@end

