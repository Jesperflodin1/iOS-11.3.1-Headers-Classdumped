/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying> {

	vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> >* mStrokeRuns;
	unsigned short _columnOrRowIndex;

}

@property (assign,nonatomic) unsigned short columnOrRowIndex;              //@synthesize columnOrRowIndex=_columnOrRowIndex - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
+(id)strokeLayer;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned short)arg2 ;
-(id)findStrokeAndRangeAtIndex:(long long)arg1 ;
-(unsigned short)columnOrRowIndex;
-(void)enumerateStrokesInRange:(TSTSimpleRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setColumnOrRowIndex:(unsigned short)arg1 ;
-(long long)startingIndex;
-(id)nextStrokeAndRange:(id)arg1 ;
-(void)enumerateStrokesUsingBlock:(/*^block*/id)arg1 ;
-(void)p_invalidate;
-(id)strokeLayerModifiedUsingMoveDelegate:(id)arg1 ;
-(id)strokeLayerModifiedByInsertingSpaceAt:(TSTSimpleRange)arg1 ;
-(id)strokeLayerModifiedByRemovingRangeAt:(TSTSimpleRange)arg1 ;
-(void)p_setStrokeRuns:(vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun> >*)arg1 ;
-(void)p_mergeStrokeRunsAtPosition:(unsigned long long)arg1 ;
-(void)p_appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)p_setStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)p_invalidateRange:(TSTSimpleRange)arg1 ;
-(void)p_insertSpaceAtRange:(TSTSimpleRange)arg1 ;
-(void)p_removeRange:(TSTSimpleRange)arg1 ;
-(void)p_flattenStrokeOrder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
