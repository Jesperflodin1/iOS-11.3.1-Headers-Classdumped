/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSCECellCoordinateVector : NSObject {

	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >* _cellCoordinates;
	NSObject*<OS_dispatch_semaphore> _sem;

}
-(void)addCellCoordinate:(TSUCellCoord)arg1 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >*)cellCoordinates;
-(unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord> >*)cellCoordinatesSet;
-(void)removeAllCellCoordinates;
-(id)init;
-(void)saveToArchive:(CellCoordinateVectorArchive*)arg1 ;
-(id)initWithArchive:(const CellCoordinateVectorArchive*)arg1 ;
@end

