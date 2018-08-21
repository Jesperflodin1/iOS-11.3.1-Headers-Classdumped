/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewrite_MergeOriginMovedInfo : NSObject {

	unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > >* _mergeOriginsMap;
	unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > >* _reverseOriginsMap;

}

@property (nonatomic,readonly) const unordered_map<TSUCellCoord* mergeOriginsMap;                //@synthesize mergeOriginsMap=_mergeOriginsMap - In the implementation block
@property (nonatomic,readonly) const unordered_map<TSUCellCoord* reverseOriginsMap;              //@synthesize reverseOriginsMap=_reverseOriginsMap - In the implementation block
-(id)initFromMessage:(const MergeOriginMovedArchive*)arg1 ;
-(void)saveToMessage:(MergeOriginMovedArchive*)arg1 ;
-(id)initWithMergeOriginsMap:(const unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > >*)arg1 reverseMap:(const unordered_map<TSUCellCoord, TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSUCellCoord> > >*)arg2 ;
-(const unordered_map<TSUCellCoord*)mergeOriginsMap;
-(const unordered_map<TSUCellCoord*)reverseOriginsMap;
-(id)description;
@end
