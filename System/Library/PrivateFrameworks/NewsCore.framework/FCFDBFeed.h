/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, NSOrderedSet;

@interface FCFDBFeed : NSManagedObject

@property (nonatomic,retain) NSString * feedID; 
@property (assign,nonatomic) NSNumber * lookupID; 
@property (nonatomic,retain) NSDate * refreshDate; 
@property (assign,nonatomic) unsigned long long refreshedToOrder; 
@property (nonatomic,retain) NSOrderedSet * segments; 
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)willAccessFeedRange:(id)arg1 ;
-(id)contiguousRangeInRange:(id)arg1 ;
-(void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(BOOL)arg8 ;
-(id)prune;
-(id)contiguousSegmentsInFeedRange:(id)arg1 ;
-(id)firstSegmentFollowingFeedRange:(id)arg1 ;
-(void)insertSegment:(id)arg1 ;
-(void)enumerateGapsWithBlock:(/*^block*/id)arg1 ;
@end

