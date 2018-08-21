/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject {

	NSRange _range;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _orderedUuids;
	unsigned short _offset;

}

@property (readonly) NSRange range;                                                        //@synthesize range=_range - In the implementation block
@property (readonly) const vector<TSU::UUIDData<TSP::UUIDData>* orderedUuids;              //@synthesize orderedUuids=_orderedUuids - In the implementation block
@property (assign) unsigned short offset;                                                  //@synthesize offset=_offset - In the implementation block
-(id)initFromMessage:(const RewriteRangeEntryArchive*)arg1 ;
-(void)saveToMessage:(RewriteRangeEntryArchive*)arg1 ;
-(id)initWithRange:(NSRange)arg1 orderedUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 offset:(unsigned short)arg3 ;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)orderedUuids;
-(id)description;
-(unsigned short)offset;
-(void)setOffset:(unsigned short)arg1 ;
-(NSRange)range;
@end

