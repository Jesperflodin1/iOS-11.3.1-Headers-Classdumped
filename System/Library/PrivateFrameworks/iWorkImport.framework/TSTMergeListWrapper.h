/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTMergeListWrapper : NSObject {

	vector<TSUCellRect, std::__1::allocator<TSUCellRect> >* _mergeList;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
-(id)initWithMergeList:(const vector<TSUCellRect, std::__1::allocator<TSUCellRect> >*)arg1 ;
-(id)regionForList;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addRange:(TSUCellRect)arg1 ;
@end

