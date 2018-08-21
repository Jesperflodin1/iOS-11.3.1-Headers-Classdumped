/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface TSCEWrappedCellRef : NSObject <NSCopying> {

	TSCECellRef _cellRef;

}

@property (nonatomic,readonly) TSCECellRef cellRef;                           //@synthesize cellRef=_cellRef - In the implementation block
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID; 
@property (nonatomic,readonly) TSUCellCoord coordinate; 
@property (nonatomic,retain,readonly) NSUUID * tableID; 
+(id)invalidCellRef;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithCellRef:(const TSCECellRef*)arg1 ;
-(TSCECellRef)cellRef;
-(id)initWithCellCoord:(TSUCellCoord)arg1 tableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithCellCoord:(TSUCellCoord)arg1 tableID:(id)arg2 ;
-(TSUCellCoord)coordinate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)tableID;
@end

