/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation {

	CSSearchableIndex* _searchableIndex;
	NSArray* _dataSources;
	unsigned long long _maxBytesPerBatch;
	NSError* _error;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,copy) NSArray * dataSources;                              //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesPerBatch;              //@synthesize maxBytesPerBatch=_maxBytesPerBatch - In the implementation block
-(id)init;
-(void)main;
-(void)deleteItems;
-(BOOL)shouldDeleteAllItemsBeforeIndexing;
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setMaxBytesPerBatch:(unsigned long long)arg1 ;
-(void)deleteAllItems;
-(void)indexItems;
-(unsigned long long)maxBytesPerBatch;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(NSArray *)dataSources;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDataSources:(NSArray *)arg1 ;
@end

