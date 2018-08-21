/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUUUIDPath, NSObject;

@interface TSWPObjectPlacement : NSObject {

	int _index;
	TSUUUIDPath* _uuidPath;
	NSObject* _object;

}

@property (nonatomic,retain) TSUUUIDPath * uuidPath;              //@synthesize uuidPath=_uuidPath - In the implementation block
@property (nonatomic,retain) NSObject * object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int index;                           //@synthesize index=_index - In the implementation block
+(id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3 ;
-(id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3 ;
-(TSUUUIDPath *)uuidPath;
-(void)setUuidPath:(TSUUUIDPath *)arg1 ;
-(NSObject *)object;
-(void)setIndex:(int)arg1 ;
-(int)index;
-(void)setObject:(NSObject *)arg1 ;
@end

