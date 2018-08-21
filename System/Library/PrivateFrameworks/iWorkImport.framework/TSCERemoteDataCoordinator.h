/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableSet, TSUPointerKeyDictionary, TSCERemoteDataValueMap, NSMutableDictionary, NSObject, TSUIntToIntDictionary;

@interface TSCERemoteDataCoordinator : NSObject {

	NSMutableSet* _sourceFetchers;
	TSUPointerKeyDictionary* _storeMap;
	TSCERemoteDataValueMap* _cachedSpecifiers;
	NSMutableDictionary* _cachedQuotes;
	NSObject*<OS_dispatch_queue> _queue;
	TSUIntToIntDictionary* _dataKindStatus;

}

@property (nonatomic,readonly) NSMutableSet * sourceFetchers;                          //@synthesize sourceFetchers=_sourceFetchers - In the implementation block
@property (nonatomic,readonly) TSUPointerKeyDictionary * storeMap;                     //@synthesize storeMap=_storeMap - In the implementation block
@property (nonatomic,readonly) TSCERemoteDataValueMap * cachedSpecifiers;              //@synthesize cachedSpecifiers=_cachedSpecifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedQuotes;                     //@synthesize cachedQuotes=_cachedQuotes - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) TSUIntToIntDictionary * dataKindStatus;                 //@synthesize dataKindStatus=_dataKindStatus - In the implementation block
+(id)sharedCoordinator;
-(void)sourceFetcherDidGoOnline:(id)arg1 forKeys:(id)arg2 ;
-(void)sourceFetcherDidGoOffline:(id)arg1 forKeys:(id)arg2 ;
-(void)fetchQuotesWithTickers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)autoCompleteQuotesWithInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TSUPointerKeyDictionary *)storeMap;
-(void)p_removeRemoteDataInterest:(id)arg1 forStore:(id)arg2 ;
-(NSMutableSet *)sourceFetchers;
-(id)p_defaultStockList;
-(id)p_fetcherForDataKind:(long long)arg1 ;
-(NSMutableDictionary *)cachedQuotes;
-(TSCERemoteDataValueMap *)cachedSpecifiers;
-(BOOL)p_canUpdateStore:(id)arg1 ;
-(id)p_localeStocks;
-(void)p_revalidateOnlineStatus;
-(TSUPointerKeyDictionary*)p_actionMapForKeys:(id)arg1 quotes:(NSDictionary*)arg2 ;
-(id)valueForSingleKey:(id)arg1 ;
-(id)cachedQuoteForSingleSymbol:(id)arg1 ;
-(void)updateKnownCachedStocksInStore:(id)arg1 ;
-(void)addRemoteDataInterest:(id)arg1 forStore:(id)arg2 ;
-(void)removeRemoteDataInterest:(id)arg1 forStore:(id)arg2 ;
-(id)p_dataSourceFetcherForRemoteData:(id)arg1 ;
-(BOOL)isOnlineForDataKind:(long long)arg1 ;
-(void)sourceFetcherDidUpdate:(id)arg1 withValues:(id)arg2 quotes:(NSDictionary*)arg3 ;
-(TSUIntToIntDictionary *)dataKindStatus;
-(void)registerStore:(id)arg1 ;
-(void)unregisterStore:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

