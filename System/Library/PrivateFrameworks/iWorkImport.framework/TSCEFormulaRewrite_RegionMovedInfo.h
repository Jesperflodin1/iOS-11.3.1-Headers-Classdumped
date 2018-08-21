/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaRewrite_RegionInfo, TSCEFormulaRewrite_Uids;

@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject {

	TSCEFormulaRewrite_RegionInfo* _srcRegion;
	TSCEFormulaRewrite_RegionInfo* _dstRegion;
	TSCEFormulaRewrite_RegionInfo* _originalSrcRegion;
	UUIDMap<TSP::UUIDMap>* _srcUidForDstUid;
	UUIDMap<TSP::UUIDMap>* _dstUidForSrcUid;
	BOOL _spanningRows;
	BOOL _spanningColumns;

}

@property (nonatomic,readonly) TSCEFormulaRewrite_RegionInfo * srcRegion;                         //@synthesize srcRegion=_srcRegion - In the implementation block
@property (nonatomic,readonly) TSCEFormulaRewrite_RegionInfo * dstRegion;                         //@synthesize dstRegion=_dstRegion - In the implementation block
@property (nonatomic,retain) TSCEFormulaRewrite_RegionInfo * originalSrcRegion;                   //@synthesize originalSrcRegion=_originalSrcRegion - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> srcTableUID; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> dstTableUID; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> originalSrcTableUID; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> srcCondStyleOwnerUID; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> dstCondStyleOwnerUID; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> originalSrcCondStyleOwnerUID; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * srcColumnUids; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * srcRowUids; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * dstColumnUids; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * dstRowUids; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * originalSrcColumnUids; 
@property (nonatomic,readonly) TSCEFormulaRewrite_Uids * originalSrcRowUids; 
@property (nonatomic,readonly) const UUIDMap<TSP::UUIDMap>* srcUidForDstUid;                      //@synthesize srcUidForDstUid=_srcUidForDstUid - In the implementation block
@property (nonatomic,readonly) const UUIDMap<TSP::UUIDMap>* dstUidForSrcUid;                      //@synthesize dstUidForSrcUid=_dstUidForSrcUid - In the implementation block
@property (assign,nonatomic) BOOL spanningRows;                                                   //@synthesize spanningRows=_spanningRows - In the implementation block
@property (assign,nonatomic) BOOL spanningColumns;                                                //@synthesize spanningColumns=_spanningColumns - In the implementation block
-(id)initFromMessage:(const RegionMovedInfoArchive*)arg1 ;
-(void)saveToMessage:(RegionMovedInfoArchive*)arg1 ;
-(void)unloadIndexes;
-(void)loadIndexesFromRegions;
-(id)initWithSrcTableUID:(const UUIDData<TSP::UUIDData>*)arg1 srcColumnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 srcRowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 dstTableUID:(const UUIDData<TSP::UUIDData>*)arg4 dstColumnUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg5 dstRowUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg6 ;
-(UUIDData<TSP::UUIDData>)srcTableUID;
-(UUIDData<TSP::UUIDData>)dstTableUID;
-(UUIDData<TSP::UUIDData>)originalSrcTableUID;
-(UUIDData<TSP::UUIDData>)srcCondStyleOwnerUID;
-(UUIDData<TSP::UUIDData>)dstCondStyleOwnerUID;
-(UUIDData<TSP::UUIDData>)originalSrcCondStyleOwnerUID;
-(TSCEFormulaRewrite_Uids *)srcColumnUids;
-(TSCEFormulaRewrite_Uids *)srcRowUids;
-(TSCEFormulaRewrite_Uids *)dstColumnUids;
-(TSCEFormulaRewrite_Uids *)dstRowUids;
-(TSCEFormulaRewrite_Uids *)originalSrcColumnUids;
-(TSCEFormulaRewrite_Uids *)originalSrcRowUids;
-(void)loadIndexesForSrcTable:(id)arg1 dstTable:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)dstUidForSrcUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(UUIDData<TSP::UUIDData>)srcUidForDstUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(TSCEFormulaRewrite_RegionInfo *)srcRegion;
-(TSCEFormulaRewrite_RegionInfo *)dstRegion;
-(TSCEFormulaRewrite_RegionInfo *)originalSrcRegion;
-(void)setOriginalSrcRegion:(TSCEFormulaRewrite_RegionInfo *)arg1 ;
-(const UUIDMap<TSP::UUIDMap>*)srcUidForDstUid;
-(const UUIDMap<TSP::UUIDMap>*)dstUidForSrcUid;
-(BOOL)spanningRows;
-(void)setSpanningRows:(BOOL)arg1 ;
-(BOOL)spanningColumns;
-(void)setSpanningColumns:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
@end

