/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableIndexSet;

@interface _UITableViewPrefetchContext : NSObject {

	/*^block*/id _requestHandler;
	/*^block*/id _cancelHandler;
	NSMutableIndexSet* _outstandingRequests;
	long long _maxIndex;
	double _lastContentOffset;
	long long _prefetchItemCount;
	long long _refreshPrefetchThresholdCount;
	long long _cancelThresholdCount;
	NSRange _lastVisibleIndexRange;

}

@property (nonatomic,retain) NSMutableIndexSet * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (assign,nonatomic) long long maxIndex;                                   //@synthesize maxIndex=_maxIndex - In the implementation block
@property (assign,nonatomic) NSRange lastVisibleIndexRange;                        //@synthesize lastVisibleIndexRange=_lastVisibleIndexRange - In the implementation block
@property (assign,nonatomic) double lastContentOffset;                             //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) long long prefetchItemCount;                          //@synthesize prefetchItemCount=_prefetchItemCount - In the implementation block
@property (assign,nonatomic) long long refreshPrefetchThresholdCount;              //@synthesize refreshPrefetchThresholdCount=_refreshPrefetchThresholdCount - In the implementation block
@property (assign,nonatomic) long long cancelThresholdCount;                       //@synthesize cancelThresholdCount=_cancelThresholdCount - In the implementation block
@property (nonatomic,copy) id requestHandler;                                      //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(void)cancel;
-(id)description;
-(void)cancelWithNewMaxIndex:(long long)arg1 ;
-(id)initWithMaxIndex:(long long)arg1 prefetchItemCount:(long long)arg2 refreshPrefetchThresholdCount:(long long)arg3 cancelThresholdCount:(long long)arg4 ;
-(void)setRequestHandler:(id)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(void)updateVisibleIndexRange:(NSRange)arg1 withContentOffset:(double)arg2 ;
-(int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(NSRange)arg1 withContentOffset:(double)arg2 ;
-(NSRange)_offsetAndValidateRange:(NSRange)arg1 firstIndexOffset:(long long)arg2 lastIndexOffset:(long long)arg3 ;
-(NSRange)_validatedRangeWithLocation:(long long)arg1 length:(long long)arg2 ;
-(id)cancelHandler;
-(id)requestHandler;
-(long long)maxIndex;
-(id)computedPrefetchIndexSet;
-(NSMutableIndexSet *)outstandingRequests;
-(void)setOutstandingRequests:(NSMutableIndexSet *)arg1 ;
-(void)setMaxIndex:(long long)arg1 ;
-(NSRange)lastVisibleIndexRange;
-(void)setLastVisibleIndexRange:(NSRange)arg1 ;
-(double)lastContentOffset;
-(void)setLastContentOffset:(double)arg1 ;
-(long long)prefetchItemCount;
-(void)setPrefetchItemCount:(long long)arg1 ;
-(long long)refreshPrefetchThresholdCount;
-(void)setRefreshPrefetchThresholdCount:(long long)arg1 ;
-(long long)cancelThresholdCount;
-(void)setCancelThresholdCount:(long long)arg1 ;
@end

