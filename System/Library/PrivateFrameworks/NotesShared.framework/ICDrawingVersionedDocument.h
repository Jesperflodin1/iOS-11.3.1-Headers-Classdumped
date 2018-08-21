/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument {

	ICDrawing* _drawing;

}

@property (nonatomic,retain) ICDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
+(unsigned)minimumSupportedVersion;
+(unsigned)serializationVersion;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(void)setDrawing:(ICDrawing *)arg1 ;
-(ICDrawing *)drawing;
@end

