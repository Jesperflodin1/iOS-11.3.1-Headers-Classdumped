/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCStreaming.h>

@class CKQueryCursor, NSMutableSet, NSString;

@interface FCTagSearchRecordStream : NSObject <FCStreaming> {

	BOOL _fetching;
	BOOL _finished;
	/*^block*/id _operationConstructor;
	CKQueryCursor* _cursor;
	NSMutableSet* _encounteredRecordIDs;

}

@property (nonatomic,copy) id operationConstructor;                            //@synthesize operationConstructor=_operationConstructor - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                           //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) BOOL fetching;                                    //@synthesize fetching=_fetching - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableSet * encounteredRecordIDs;              //@synthesize encounteredRecordIDs=_encounteredRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(BOOL)arg1 ;
-(id)init;
-(CKQueryCursor *)cursor;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(BOOL)isFinished;
-(id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)fetching;
-(void)setFetching:(BOOL)arg1 ;
-(void)setOperationConstructor:(id)arg1 ;
-(id)operationConstructor;
-(NSMutableSet *)encounteredRecordIDs;
-(void)setEncounteredRecordIDs:(NSMutableSet *)arg1 ;
@end

