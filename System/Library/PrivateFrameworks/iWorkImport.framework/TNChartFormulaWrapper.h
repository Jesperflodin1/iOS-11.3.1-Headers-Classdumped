/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartFormulaWrapper : NSObject {

	TSCEFormula* mPtrToFormula;
	long long mCachedNumberOfValues;
	TSCEVector* mCachedOuputValueVector;

}

@property (readonly) TSCEFormula* formula; 
+(id)chartFormulaForRangeReference:(TSCERangeRef)arg1 ;
+(id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2 ;
+(id)chartFormulaForString:(id)arg1 ;
+(id)chartFormulaWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
+(id)emptyChartFormula;
+(id)chartFormulaForCellReference:(TSCECellRef)arg1 ;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
-(TSCERangeRef)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(unsigned long long)numberOfValuesWithCalcEngine:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(TSCEValue)valueAtIndex:(unsigned long long)arg1 withCalcEngine:(id)arg2 inTable:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(TSCEVector*)outputValueVectorWithCalcEngine:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)formulaIsEqualTo:(id)arg1 ;
-(void)clearCacheForCalculationEngine:(id)arg1 ;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(const UUIDData<TSP::UUIDData>*)arg2 storeBadRef:(BOOL)arg3 ;
-(id)formulaByRewriting:(BOOL)arg1 withCalcEngine:(id)arg2 andHostUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSCEFormula*)formula;
@end

