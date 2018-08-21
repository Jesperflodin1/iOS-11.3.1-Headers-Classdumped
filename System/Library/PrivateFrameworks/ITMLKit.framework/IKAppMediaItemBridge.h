/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppMediaItem;
@class NSString, IKAppContext, IKJSMediaItem, NSNumber, NSArray, NSDictionary;

@interface IKAppMediaItemBridge : NSObject {

	NSString* _artworkImageURL;
	NSString* _artworkImageSrcset;
	id<IKAppMediaItem> _appMediaItem;
	IKAppContext* _appContext;
	IKJSMediaItem* _jsMediaItem;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                             //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKJSMediaItem * jsMediaItem;                           //@synthesize jsMediaItem=_jsMediaItem - In the implementation block
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL;                                     //@synthesize artworkImageURL=_artworkImageURL - In the implementation block
@property (nonatomic,retain) NSString * artworkImageSrcset;                                  //@synthesize artworkImageSrcset=_artworkImageSrcset - In the implementation block
@property (nonatomic,retain) NSString * ratingBadge; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * chapterGroups; 
@property (nonatomic,retain) NSDictionary * extraMetadata; 
@property (assign,nonatomic) double contentProposalPresentationTime; 
@property (assign,nonatomic) double contentProposalAutomaticAcceptanceInterval; 
@property (nonatomic,__weak,readonly) id<IKAppMediaItem> appMediaItem;                       //@synthesize appMediaItem=_appMediaItem - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)cleanup;
-(void)setDescription:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(id<IKAppMediaItem>)appMediaItem;
-(IKJSMediaItem *)jsMediaItem;
-(id)initWithAppContext:(id)arg1 jsMediaItem:(id)arg2 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setChapterGroups:(NSArray *)arg1 ;
-(NSArray *)chapterGroups;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setRatingBadge:(NSString *)arg1 ;
-(NSString *)ratingBadge;
-(void)setArtworkImageURL:(NSString *)arg1 ;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(NSString *)arg1 ;
-(NSString *)artworkImageSrcset;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setResumeTime:(NSNumber *)arg1 ;
-(NSNumber *)resumeTime;
-(void)setExtraMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)extraMetadata;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(double)contentProposalAutomaticAcceptanceInterval;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(double)contentProposalPresentationTime;
-(void)_resolveArtworkImageURL;
-(void)prepareForLoadingWithCallback:(/*^block*/id)arg1 ;
-(void)loadCertificateDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadContentIdentifierDataForURL:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(NSString *)externalID;
-(BOOL)isExplicit;
-(IKAppContext *)appContext;
@end

