/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleViewControllerFactory.h>

@protocol NUArticleViewControllerFactory <NSObject>
@required
-(id)createArticleViewControllerWithArticle:(id)arg1;
-(id)createArticleWebViewControllerWithArticle:(id)arg1;
-(id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;

@end


@protocol NUArticleDataProviderFactory, NUEndOfArticleDataProviderFactory, NUArticleAdManagerFactory, NUDynamicTypeProviding, SXAppStateMonitor, NUScrollViewKeyCommandHandler, NFResolver;
@class NSString;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory> {

	id<NUArticleDataProviderFactory> _articleDataProviderFactory;
	id<NUEndOfArticleDataProviderFactory> _endOfArticleDataProviderFactory;
	id<NUArticleAdManagerFactory> _articleAdManagerFactory;
	id<NUDynamicTypeProviding> _dynamicTypeProviding;
	id<SXAppStateMonitor> _appStateMonitor;
	id<NUScrollViewKeyCommandHandler> _keyCommandHandler;
	id<NFResolver> _resolver;

}

@property (nonatomic,readonly) id<NUArticleDataProviderFactory> articleDataProviderFactory;                        //@synthesize articleDataProviderFactory=_articleDataProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUEndOfArticleDataProviderFactory> endOfArticleDataProviderFactory;              //@synthesize endOfArticleDataProviderFactory=_endOfArticleDataProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUArticleAdManagerFactory> articleAdManagerFactory;                              //@synthesize articleAdManagerFactory=_articleAdManagerFactory - In the implementation block
@property (nonatomic,readonly) id<NUDynamicTypeProviding> dynamicTypeProviding;                                    //@synthesize dynamicTypeProviding=_dynamicTypeProviding - In the implementation block
@property (nonatomic,readonly) id<SXAppStateMonitor> appStateMonitor;                                              //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,readonly) id<NUScrollViewKeyCommandHandler> keyCommandHandler;                                //@synthesize keyCommandHandler=_keyCommandHandler - In the implementation block
@property (nonatomic,readonly) id<NFResolver> resolver;                                                            //@synthesize resolver=_resolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAppStateMonitor>)appStateMonitor;
-(id<NFResolver>)resolver;
-(id<NUArticleDataProviderFactory>)articleDataProviderFactory;
-(id<NUEndOfArticleDataProviderFactory>)endOfArticleDataProviderFactory;
-(id<NUArticleAdManagerFactory>)articleAdManagerFactory;
-(id<NUDynamicTypeProviding>)dynamicTypeProviding;
-(id<NUScrollViewKeyCommandHandler>)keyCommandHandler;
-(id)createArticleViewControllerWithArticle:(id)arg1 ;
-(id)createArticleWebViewControllerWithArticle:(id)arg1 ;
-(id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2 ;
-(id)initWithArticleDataProviderFactory:(id)arg1 endOfArticleDataProviderFactory:(id)arg2 articleAdManagerFactory:(id)arg3 dynamicTypeProviding:(id)arg4 appStateMonitor:(id)arg5 keyCommandHandler:(id)arg6 resolver:(id)arg7 ;
@end
