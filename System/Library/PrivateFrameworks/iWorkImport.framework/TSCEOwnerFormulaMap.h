/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEOwnerFormulaMap : NSObject {

	vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > >* _formulas;
	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >* _nonFormulaCells;

}
-(void)addFormula:(TSCEFormula*)arg1 atCellCoordinate:(TSUCellCoord)arg2 ;
-(TSCEFormula*)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(TSUCellCoord*)arg2 ;
-(void)saveToArchive:(OwnerFormulaMapArchive*)arg1 archiver:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithArchive:(const OwnerFormulaMapArchive*)arg1 ;
@end

