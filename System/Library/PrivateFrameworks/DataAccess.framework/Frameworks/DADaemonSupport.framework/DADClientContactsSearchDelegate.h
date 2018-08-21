/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DASearchQueryConsumer.h>

@class DASearchQuery, NSData;

@interface DADClientContactsSearchDelegate : DADClientDelegate <DASearchQueryConsumer> {

	DASearchQuery* _query;
	NSData* _queryResultData;

}

@property (nonatomic,retain) DASearchQuery * query;                 //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * queryResultData;              //@synthesize queryResultData=_queryResultData - In the implementation block
-(void)setQuery:(DASearchQuery *)arg1 ;
-(void)dealloc;
-(DASearchQuery *)query;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)disable;
-(id)initWithAccountID:(id)arg1 queryDictionary:(id)arg2 client:(id)arg3 ;
-(void)beginQuery;
-(void)setQueryResultData:(NSData *)arg1 ;
-(NSData *)queryResultData;
-(void)finishWithError:(id)arg1 ;
@end

