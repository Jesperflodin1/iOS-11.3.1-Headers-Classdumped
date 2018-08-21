/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, TSTFormulaPredArg, NSLock;

@interface TSTFormulaPredicate : NSObject <NSCopying> {

	TSCEFormula* mFormula;
	int mPredicateType;
	int mQualifier1;
	int mQualifier2;
	int mArgIndex0;
	int mArgIndex1;
	int mArgIndex2;
	BOOL mParamsAreDone;
	unsigned char mNodeTag0;
	unsigned char mNodeTag1;
	unsigned char mNodeTag2;
	double mNumberParam1;
	double mNumberParam2;
	NSString* mStringParam1;
	NSDate* mDateTimeParam1;
	NSDate* mDateTimeParam2;
	TSCENumberValue* mDurationParam1;
	TSCENumberValue* mDurationParam2;
	TSCEASTNodeCrossTableCellReference mCrossTableRefParam0;
	TSCEASTNodeCrossTableCellReference mCrossTableRefParam1;
	TSCEASTNodeCrossTableCellReference mCrossTableRefParam2;
	TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam0;
	TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam1;
	TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam2;
	TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam0;
	TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam1;
	TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam2;
	TSTFormulaPredArg* mPredArg1;
	TSTFormulaPredArg* mPredArg2;
	NSLock* mPopulateMembersLock;

}

@property (nonatomic,retain) TSTFormulaPredArg * predArg1; 
@property (nonatomic,retain) TSTFormulaPredArg * predArg2; 
+(id)defaultPredicateForType:(int)arg1 argumentCellRef:(TSCECellRef)arg2 hostCell:(TSUCellCoord)arg3 ;
+(id)defaultPredicateForType:(int)arg1 argumentCellReference:(id)arg2 hostCell:(TSUCellCoord)arg3 ;
+(BOOL)isThresholdNeededForType:(int)arg1 ;
-(void)encodeToArchive:(FormulaPredicateArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FormulaPredicateArchive*)arg1 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap<TSP::UUIDMap>*)arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData<TSP::UUIDData>*)arg3 error:(BOOL*)arg4 ;
-(id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap<TSP::UUIDMap>*)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3 ;
-(id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)hasBadRefWithUidInfo;
-(id)copyByRepairingBadReferences:(id)arg1 ;
-(double)numberParam1;
-(int)predicateType;
-(int)qualifier1;
-(id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellRef:(TSCECellRef)arg3 hostCell:(TSUCellCoord)arg4 ;
-(id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(TSCECellRef)arg8 hostCell:(TSUCellCoord)arg9 ;
-(id)initWithLiteralDurationType:(int)arg1 duration1:(double)arg2 durationUnits1:(int)arg3 duration2:(double)arg4 durationUnits2:(int)arg5 qualifier:(int)arg6 argumentCellRef:(TSCECellRef)arg7 hostCell:(TSUCellCoord)arg8 ;
-(id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellRef:(TSCECellRef)arg5 hostCell:(TSUCellCoord)arg6 ;
-(id)copyToUidFormForHiddenRowsWithTableInfo:(id)arg1 ;
-(id)copyToGeometricFormForHiddenRowsWithTableInfo:(id)arg1 containsBadRef:(BOOL*)arg2 ;
-(BOOL)evaluateAtCellID:(TSUCellCoord)arg1 inFormulaOwner:(const UUIDData<TSP::UUIDData>*)arg2 calculationEngine:(id)arg3 ;
-(id)stringParam1;
-(id)dateTimeParam1;
-(TSCENumberValue*)durationParam1;
-(void)upgradeTopAndBottom;
-(void)p_clearDerivedVariables;
-(BOOL)p_isEqualForNonFormulaItems:(id)arg1 ;
-(id)predicateArg1atHostCoordinate:(TSUCellCoord)arg1 calcEngine:(id)arg2 ;
-(id)predicateArg2atHostCoordinate:(TSUCellCoord)arg1 calcEngine:(id)arg2 ;
-(TSCEFormulaCreator)p_creatorForPeriodBoundaryWithScale:(int)arg1 direction:(int)arg2 offset:(id)arg3 argIndex:(unsigned)arg4 earlierBound:(BOOL)arg5 isCalPers:(BOOL)arg6 hostCell:(TSUCellCoord)arg7 ;
-(id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(TSCECellRef)arg6 hostCell:(TSUCellCoord)arg7 forConditionalStyle:(BOOL)arg8 ;
-(id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellRef:(TSCECellRef)arg6 hostCell:(TSUCellCoord)arg7 ;
-(id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellRef:(TSCECellRef)arg8 hostCell:(TSUCellCoord)arg9 forConditionalStyle:(BOOL)arg10 ;
-(void)p_setPredicateType:(int)arg1 ;
-(void)p_setQualifier1:(int)arg1 ;
-(void)p_setQualifier2:(int)arg1 ;
-(void)p_setParamIndex0:(int)arg1 ;
-(void)p_setParamIndex1:(int)arg1 ;
-(void)p_setParamIndex2:(int)arg1 ;
-(id)copyToUidFormWithRewriteContext:(id)arg1 ;
-(id)copyToGeometricFormWithRewriteContext:(id)arg1 ;
-(const TSCEASTNodeCrossTableCellReference*)crossTableRefParam0;
-(const TSCEASTNodeCrossTableCellReference*)crossTableRefParam1;
-(const TSCEASTNodeCrossTableCellReference*)crossTableRefParam2;
-(unsigned char)nodeTag0;
-(int)p_argTypeForNodeTag:(unsigned char)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(TSUCellCoord)arg4 ;
-(unsigned char)nodeTag1;
-(unsigned char)nodeTag2;
-(BOOL)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(BOOL*)arg4 ;
-(void)p_populateMembersFromFormula;
-(void)setPredArg1:(TSTFormulaPredArg *)arg1 ;
-(void)setPredArg2:(TSTFormulaPredArg *)arg1 ;
-(int)qualifier2;
-(id)copyByUpgradingToLinkedRefForTable:(const UUIDData<TSP::UUIDData>*)arg1 hostCell:(TSUCellCoord)arg2 ;
-(TSTFormulaPredArg *)predArg1;
-(TSTFormulaPredArg *)predArg2;
-(BOOL)isEqualForInspector:(id)arg1 atHostCoordinate:(TSUCellCoord)arg2 ;
-(id)initWithPredicateType:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(id)arg6 hostCell:(TSUCellCoord)arg7 forConditionalStyle:(BOOL)arg8 ;
-(id)copyToUidFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3 ;
-(id)copyToGeometricFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(TSUCellCoord)arg2 rewriteFlags:(unsigned char)arg3 ;
-(void)setHostCell:(const UUIDData<TSP::UUIDData>*)arg1 hostColumnUID:(const UUIDData<TSP::UUIDData>*)arg2 hostRowUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(BOOL)containsUidReferences;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDouble:(double)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withString:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDate:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDurationValue:(double)arg3 withUnit:(int)arg4 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCellRef:(TSCEASTNodeCrossTableCellReference)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withColumnRef:(TSCEASTNodeCrossTableColumnReference)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withRowRef:(TSCEASTNodeCrossTableRowReference)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withUidRangeRef:(id)arg3 ;
-(double)numberParam2;
-(id)dateTimeParam2;
-(TSCENumberValue*)durationParam2;
-(const TSCEASTNodeCrossTableColumnReference*)crossTableColumnRefParam0;
-(const TSCEASTNodeCrossTableColumnReference*)crossTableColumnRefParam1;
-(const TSCEASTNodeCrossTableColumnReference*)crossTableColumnRefParam2;
-(const TSCEASTNodeCrossTableRowReference*)crossTableRowRefParam0;
-(const TSCEASTNodeCrossTableRowReference*)crossTableRowRefParam1;
-(const TSCEASTNodeCrossTableRowReference*)crossTableRowRefParam2;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(TSUCellCoord)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2 ;
-(id)copyByUpdatingLinkedTable:(const UUIDData<TSP::UUIDData>*)arg1 hostCell:(TSUCellCoord)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCEFormula*)formula;
-(void)setFormula:(const TSCEFormula*)arg1 ;
@end

