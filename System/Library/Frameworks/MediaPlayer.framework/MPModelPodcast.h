/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * feedURL; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (assign,nonatomic) BOOL supportsSubscription; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__title_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__feedURL_KEY;
+(id)__shareURL_KEY;
+(id)__supportsSubscription_KEY;
+(id)__author_KEY;
-(id)artworkCatalog;
@end

