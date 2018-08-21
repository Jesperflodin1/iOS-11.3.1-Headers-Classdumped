/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTVersionedDocument.h>

@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument {

	TTMergeableAttributedString* _mergeableString;

}

@property (nonatomic,retain) TTMergeableAttributedString * mergeableString;              //@synthesize mergeableString=_mergeableString - In the implementation block
+(unsigned)minimumSupportedVersion;
+(unsigned)serializationVersion;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(id)initWithArchive:(const Document*)arg1 andReplicaID:(id)arg2 ;
-(void)setMergeableString:(TTMergeableAttributedString *)arg1 ;
-(id)initWithMergeableString:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(TTMergeableAttributedString *)mergeableString;
-(unsigned long long)mergeWithStringVersionedDocument:(id)arg1 ;
@end

