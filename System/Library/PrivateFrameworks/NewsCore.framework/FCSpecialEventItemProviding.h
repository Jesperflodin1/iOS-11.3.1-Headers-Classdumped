/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FCSpecialEventItemProviding <NSObject,NSCopying>
@property (nonatomic,readonly) id<FCSpecialEventArticleProviding> asArticle; 
@property (nonatomic,readonly) id<FCSpecialEventWebEmbedProviding> asWebEmbed; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSString * actionUrlString; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(unsigned long long)itemType;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)actionTitle;
-(id<FCSpecialEventArticleProviding>)asArticle;
-(id<FCSpecialEventWebEmbedProviding>)asWebEmbed;
-(NSString *)actionUrlString;

@end

