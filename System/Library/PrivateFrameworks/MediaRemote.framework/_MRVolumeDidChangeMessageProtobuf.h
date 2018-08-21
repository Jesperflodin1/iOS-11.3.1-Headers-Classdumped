/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying> {

	NSString* _endpointIdentifier;
	NSString* _outputDeviceIdentifier;
	float _volume;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                                   //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL hasEndpointIdentifier; 
@property (nonatomic,retain) NSString * endpointIdentifier;                  //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOutputDeviceIdentifier; 
@property (nonatomic,retain) NSString * outputDeviceIdentifier;              //@synthesize outputDeviceIdentifier=_outputDeviceIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasVolume:(BOOL)arg1 ;
-(BOOL)hasVolume;
-(void)setOutputDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)outputDeviceIdentifier;
-(BOOL)hasEndpointIdentifier;
-(BOOL)hasOutputDeviceIdentifier;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
@end

