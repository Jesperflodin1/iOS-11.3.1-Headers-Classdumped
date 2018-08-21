/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellDiffing.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>

@class NSString;

@interface TSTTSCEFormulaWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing> {

	TSCEFormula* _formula;

}

@property (nonatomic,readonly) const TSCEFormula* formula;              //@synthesize formula=_formula - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellDiffProperties;
-(void)didInitFromSOS;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4 ;
-(void)applyToCell:(id)arg1 ;
-(BOOL)p_mightBeEqual:(id)arg1 ;
-(id)initWithFormula:(const TSCEFormula*)arg1 fromTableModel:(id)arg2 fromCellID:(TSUCellCoord)arg3 ;
-(id)propertiesMatchingThoseInMap:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(const TSCEFormula*)formula;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initWithFormula:(const TSCEFormula*)arg1 ;
@end
