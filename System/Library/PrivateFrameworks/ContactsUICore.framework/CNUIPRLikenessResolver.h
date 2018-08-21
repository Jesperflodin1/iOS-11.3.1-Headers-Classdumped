/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPRLikenessResolver.h>

@protocol CNUIPRLikenessResolver <NSObject>
@required
+(id)descriptorForRequiredKeys;
-(id)likenessesForContact:(id)arg1;
-(id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(/*^block*/id)arg2;
-(id)basicMonogramObservableFromString:(id)arg1;
-(id)placeholderProviderFactory;

@end


@protocol CNUIPRLikenessResolver, OS_dispatch_source, CNSchedulerProvider, CNUIPlaceholderProviderFactory;
@class CNCache, CNQueue, NSObject, CNContactStore, PRPersonaStore, CNSchedulerProvider, NSString;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {

	id<CNUIPRLikenessResolver> _likenessResolver;
	CNCache* _likenessCache;
	CNQueue* _evictionQueue;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;
	id<CNSchedulerProvider> _mainThreadSchedulerProvider;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;                                //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) CNCache * likenessCache;                                                    //@synthesize likenessCache=_likenessCache - In the implementation block
@property (nonatomic,retain) CNQueue * evictionQueue;                                                    //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryMonitoringSource;                       //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> mainThreadSchedulerProvider;                        //@synthesize mainThreadSchedulerProvider=_mainThreadSchedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;              //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (assign,nonatomic) long long prohibitedSources; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (nonatomic,readonly) CNSchedulerProvider * schedulerProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cacheKeyForContact:(id)arg1 ;
+(id)descriptorForRequiredKeys;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(id)likenessesForContact:(id)arg1 ;
-(CNCache *)likenessCache;
-(void)emptyCache:(id)arg1 ;
-(id<CNSchedulerProvider>)mainThreadSchedulerProvider;
-(void)refreshCacheKey:(id)arg1 ;
-(CNQueue *)evictionQueue;
-(id)likenessLookup;
-(long long)prohibitedSources;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 ;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4 ;
-(void)setLikenessCache:(CNCache *)arg1 ;
-(void)setEvictionQueue:(CNQueue *)arg1 ;
-(void)setMemoryMonitoringSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMainThreadSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(CNSchedulerProvider *)schedulerProvider;
-(PRPersonaStore *)personaStore;
-(void)setProhibitedSources:(long long)arg1 ;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(/*^block*/id)arg2 ;
-(id)basicMonogramObservableFromString:(id)arg1 ;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(id)initWithLikenessResolver:(id)arg1 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(CNContactStore *)contactStore;
@end

