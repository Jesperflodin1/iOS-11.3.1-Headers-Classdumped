/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSPersistentHistoryToken, NSDate, NSArray, NSNumber;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {

	NSPersistentHistoryToken* _token;
	NSDate* _date;
	long long _resultType;
	NSArray* _transactionIDs;
	NSNumber* _transactionNumber;
	struct {
		unsigned _useQueryGenerationToken : 1;
		unsigned _deleteHistoryRequest : 1;
		unsigned _reservedPersistentHistoryChangeRequestDescription : 30;
	}  _persistentHistoryChangeRequestDescriptionFlags;

}

@property (assign) long long resultType;                            //@synthesize resultType=_resultType - In the implementation block
@property (readonly) NSPersistentHistoryToken * token;              //@synthesize token=_token - In the implementation block
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)deleteHistoryBeforeToken:(id)arg1 ;
+(id)fetchHistoryAfterToken:(id)arg1 ;
+(id)deleteHistoryBeforeDate:(id)arg1 ;
+(id)fetchHistoryAfterDate:(id)arg1 ;
+(id)fetchHistoryAfterTransaction:(id)arg1 ;
+(id)deleteHistoryBeforeTransaction:(id)arg1 ;
-(unsigned long long)fetchOffset;
-(id)propertiesToFetch;
-(id)propertiesToGroupBy;
-(id)encodeForXPC;
-(id)transactionNumber;
-(id)initWithDate:(id)arg1 delete:(BOOL)arg2 ;
-(id)initWithToken:(id)arg1 delete:(BOOL)arg2 ;
-(id)initWithTransactionIDs:(id)arg1 ;
-(id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2 ;
-(BOOL)includesPropertyValues;
-(id)entityNameToFetch;
-(BOOL)useQueryGenerationToken;
-(void)setUseQueryGenerationToken:(BOOL)arg1 ;
-(BOOL)returnsDistinctResults;
-(BOOL)includesSubentities;
-(unsigned long long)requestType;
-(long long)resultType;
-(id)initWithDate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)date;
-(BOOL)isDelete;
-(id)sortDescriptors;
-(id)predicate;
-(NSPersistentHistoryToken *)token;
-(unsigned long long)fetchLimit;
-(void)setResultType:(long long)arg1 ;
-(id)initWithToken:(id)arg1 ;
@end

