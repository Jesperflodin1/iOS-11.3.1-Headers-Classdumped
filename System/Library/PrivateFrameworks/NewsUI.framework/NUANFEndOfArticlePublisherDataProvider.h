/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCArticle, NUEndOfArticleSettings, NUANFEndOfArticleFeedDataProvider;

@interface NUANFEndOfArticlePublisherDataProvider : NSObject {

	FCArticle* _article;
	NUEndOfArticleSettings* _settings;
	NUANFEndOfArticleFeedDataProvider* _feedDataProvider;

}

@property (nonatomic,readonly) FCArticle * article;                                               //@synthesize article=_article - In the implementation block
@property (nonatomic,copy,readonly) NUEndOfArticleSettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NUANFEndOfArticleFeedDataProvider * feedDataProvider;              //@synthesize feedDataProvider=_feedDataProvider - In the implementation block
-(NUEndOfArticleSettings *)settings;
-(FCArticle *)article;
-(NUANFEndOfArticleFeedDataProvider *)feedDataProvider;
-(id)initWithArticle:(id)arg1 settings:(id)arg2 headlines:(id)arg3 ;
@end
