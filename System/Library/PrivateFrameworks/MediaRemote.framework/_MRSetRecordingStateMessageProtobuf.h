/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSetRecordingStateMessageProtobuf : PBCodable <NSCopying> {

	int _state;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                  //@synthesize state=_state - In the implementation block
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
@end

