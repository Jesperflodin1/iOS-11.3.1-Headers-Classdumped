/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, HKSampleType, NSPredicate, HKAnchoredObjectQuery, HKQueryAnchor, NSMutableArray;

@interface _HKSampleQueryUtility : NSObject {

	HKHealthStore* _healthStore;
	HKSampleType* _sampleType;
	NSPredicate* _predicate;
	HKAnchoredObjectQuery* _query;
	HKQueryAnchor* _queryAnchor;
	NSMutableArray* _samples;
	BOOL _sortStartDateAscending;
	/*^block*/id _updateHandler;

}

@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL sortStartDateAscending;              //@synthesize sortStartDateAscending=_sortStartDateAscending - In the implementation block
-(id)init;
-(void)stop;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)setSortStartDateAscending:(BOOL)arg1 ;
-(void)setupQueryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 updateHandler:(/*^block*/id)arg5 ;
-(void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sortStartDateAscending;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)execute;
@end
