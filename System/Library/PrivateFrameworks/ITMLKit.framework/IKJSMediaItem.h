/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSMediaItem.h>
@class NSString, NSNumber, NSDictionary, NSArray;


@protocol IKJSMediaItem <JSExport>
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL; 
@property (nonatomic,retain) NSString * artworkImageSrcset; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime; 
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * highlightGroups; 
@required
-(void)setMetadata:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setUrl:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(void)setDescription:(id)arg1;
-(NSDictionary *)metadata;
-(void)setExternalID:(id)arg1;
-(void)setInterstitials:(id)arg1;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(id)arg1;
-(NSNumber *)contentRatingRanking;
-(void)setArtworkImageURL:(id)arg1;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(id)arg1;
-(NSString *)artworkImageSrcset;
-(void)setIsExplicit:(BOOL)arg1;
-(void)setResumeTime:(id)arg1;
-(NSNumber *)resumeTime;
-(void)setContentRatingDomain:(id)arg1;
-(NSString *)contentRatingDomain;
-(id)initWithType:(id)arg1 :(id)arg2;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(id)arg1;
-(NSString *)externalID;
-(BOOL)isExplicit;

@end


@class NSString, NSNumber, NSDictionary, NSArray, IKAppMediaItemBridge;

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem> {

	NSNumber* _resumeTime;
	IKAppMediaItemBridge* _bridge;

}

@property (nonatomic,readonly) IKAppMediaItemBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSString * externalID; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * contentRatingDomain; 
@property (nonatomic,retain) NSNumber * contentRatingRanking; 
@property (nonatomic,retain) NSString * artworkImageURL; 
@property (nonatomic,retain) NSString * artworkImageSrcset; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (nonatomic,retain) NSNumber * resumeTime;                        //@synthesize resumeTime=_resumeTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata; 
@property (nonatomic,retain) NSArray * interstitials; 
@property (nonatomic,retain) NSArray * highlightGroups; 
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setDescription:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setRatingBadge:(id)arg1 ;
-(id)ratingBadge;
-(void)setArtworkImageURL:(NSString *)arg1 ;
-(NSString *)artworkImageURL;
-(void)setArtworkImageSrcset:(NSString *)arg1 ;
-(NSString *)artworkImageSrcset;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setResumeTime:(NSNumber *)arg1 ;
-(NSNumber *)resumeTime;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(double)contentProposalAutomaticAcceptanceInterval;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(double)contentProposalPresentationTime;
-(id)initWithType:(id)arg1 :(id)arg2 ;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(NSArray *)arg1 ;
-(void)loadCertificateDataForURI:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(NSString *)externalID;
-(BOOL)isExplicit;
-(IKAppMediaItemBridge *)bridge;
@end

