/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTCellMap.h>

@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {

	SCD_Struct_TS139* mCellIDs;
	id* mCells;
	unsigned long long mCapacity;
	unsigned long long mCount;
	BOOL mMayModifyValuesReferencedByFormulas;
	BOOL mIgnoreHiddenCellsWhenApplying;
	BOOL mAppliesToHidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL appliesToHidden; 
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS139)arg2 ;
-(BOOL)containsCellID:(SCD_Struct_TS139)arg1 ;
-(void)popLastCell;
-(SCD_Struct_TS139*)cellIDs;
-(SCD_Struct_TS139)cellIDAtIndex:(unsigned long long)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1 ;
-(BOOL)appliesToHidden;
-(void)setAppliesToHidden:(BOOL)arg1 ;
@end
