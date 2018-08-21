/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDSearchQueryDelegate, OS_dispatch_queue;
@class NSPredicate, NSObject, CSSearchQuery, NSString, NSDictionary;

@interface MDSearchQuery : NSObject {

	unsigned long long _status;
	NSPredicate* _predicate;
	id<MDSearchQueryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchQuery* _query;
	NSString* _clientBundleID;

}

@property (copy) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long status; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                           //@synthesize query=_query - In the implementation block
@property (retain) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (copy,readonly) NSDictionary * options; 
@property (__weak) id<MDSearchQueryDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
-(void)_didFinishWithError:(id)arg1 ;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(id)queryString;
-(void)_didReturnItems:(id)arg1 ;
-(void)cancel;
-(id<MDSearchQueryDelegate>)delegate;
-(void)setDelegate:(id<MDSearchQueryDelegate>)arg1 ;
-(CSSearchQuery *)query;
-(void)start;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(NSDictionary *)options;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
@end
