/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TTVectorMultiTimestamp : NSObject <NSCopying> {

	NSArray* _timestamps;

}

@property (nonatomic,retain) NSArray * timestamps;                 //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,readonly) BOOL isDocumentShared; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2 ;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isDocumentShared;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(NSArray *)timestamps;
-(id)sortedUUIDs;
-(id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 andCapacity:(unsigned long long)arg2 ;
-(id)initWithTimestamps:(id)arg1 ;
-(void)setTimestamps:(NSArray *)arg1 ;
-(id)serialize;
@end

