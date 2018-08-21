/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectorState : NSObject <NSCopying> {

	unsigned long long _collectionType;
	unsigned long long _sourceType;
	long long _priority;

}

@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceType;                  //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) long long priority;                             //@synthesize priority=_priority - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
@end
