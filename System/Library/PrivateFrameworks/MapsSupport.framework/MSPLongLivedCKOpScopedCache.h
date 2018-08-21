/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSPLongLivedCKOpCache;

@interface MSPLongLivedCKOpScopedCache : NSObject {

	NSString* _typeName;
	MSPLongLivedCKOpCache* _cache;

}

@property (nonatomic,retain) MSPLongLivedCKOpCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
-(id)initWithType:(id)arg1 ;
-(MSPLongLivedCKOpCache *)cache;
-(void)addOperation:(id)arg1 ;
-(void)setCache:(MSPLongLivedCKOpCache *)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(void)pruneOperationsToIDs:(id)arg1 ;
-(BOOL)isAwareOfOperationID:(id)arg1 ;
-(BOOL)isCurrentOperationID:(id)arg1 ;
-(id)initWithType:(id)arg1 cache:(id)arg2 ;
-(BOOL)hasOperationID:(id)arg1 ;
-(NSString *)typeName;
@end
