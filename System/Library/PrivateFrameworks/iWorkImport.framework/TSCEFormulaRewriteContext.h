/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCECalculationEngine, TSCERewriteTableIDInfo;

@interface TSCEFormulaRewriteContext : NSObject {

	unsigned char _rewriteFlags;
	BOOL _preserveHostCell;
	BOOL _containsBadRef;
	BOOL _sawBadRefWithUidTracts;
	BOOL _tableSizeGrowing;
	TSUCellCoord _containingCellCoord;
	TSCECalculationEngine* _calcEngine;
	TSCERewriteTableIDInfo* _tableIdHistory;
	SCD_Struct_TS87 _fromOffset;
	UUIDData<TSP::UUIDData> _containingTableUID;
	UUIDData<TSP::UUIDData> _resolverTableUID;

}

@property (nonatomic,retain) TSCECalculationEngine * calcEngine;                      //@synthesize calcEngine=_calcEngine - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> containingTableUID;              //@synthesize containingTableUID=_containingTableUID - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> resolverTableUID;                //@synthesize resolverTableUID=_resolverTableUID - In the implementation block
@property (assign,nonatomic) TSUCellCoord containingCellCoord;                        //@synthesize containingCellCoord=_containingCellCoord - In the implementation block
@property (assign,nonatomic) unsigned char rewriteFlags;                              //@synthesize rewriteFlags=_rewriteFlags - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS87 fromOffset;                              //@synthesize fromOffset=_fromOffset - In the implementation block
@property (assign,nonatomic) BOOL preserveHostCell;                                   //@synthesize preserveHostCell=_preserveHostCell - In the implementation block
@property (nonatomic,retain) TSCERewriteTableIDInfo * tableIdHistory;                 //@synthesize tableIdHistory=_tableIdHistory - In the implementation block
@property (assign,nonatomic) BOOL tableSizeGrowing;                                   //@synthesize tableSizeGrowing=_tableSizeGrowing - In the implementation block
@property (assign,nonatomic) BOOL containsBadRef;                                     //@synthesize containsBadRef=_containsBadRef - In the implementation block
@property (assign,nonatomic) BOOL sawBadRefWithUidTracts;                             //@synthesize sawBadRefWithUidTracts=_sawBadRefWithUidTracts - In the implementation block
-(void)setContainingTableUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)resetOutputs;
-(id)initWithCalcEngine:(id)arg1 containingTable:(const UUIDData<TSP::UUIDData>*)arg2 containingCell:(TSUCellCoord)arg3 rewriteFlags:(unsigned char)arg4 ;
-(TSCECalculationEngine *)calcEngine;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(UUIDData<TSP::UUIDData>)containingTableUID;
-(UUIDData<TSP::UUIDData>)resolverTableUID;
-(void)setResolverTableUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(TSUCellCoord)containingCellCoord;
-(void)setContainingCellCoord:(TSUCellCoord)arg1 ;
-(unsigned char)rewriteFlags;
-(void)setRewriteFlags:(unsigned char)arg1 ;
-(TSCERewriteTableIDInfo *)tableIdHistory;
-(void)setTableIdHistory:(TSCERewriteTableIDInfo *)arg1 ;
-(SCD_Struct_TS87)fromOffset;
-(void)setFromOffset:(SCD_Struct_TS87)arg1 ;
-(BOOL)preserveHostCell;
-(void)setPreserveHostCell:(BOOL)arg1 ;
-(BOOL)containsBadRef;
-(void)setContainsBadRef:(BOOL)arg1 ;
-(BOOL)sawBadRefWithUidTracts;
-(void)setSawBadRefWithUidTracts:(BOOL)arg1 ;
-(BOOL)tableSizeGrowing;
-(void)setTableSizeGrowing:(BOOL)arg1 ;
-(void)dealloc;
@end

