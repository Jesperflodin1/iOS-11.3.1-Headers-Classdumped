/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {

	NSString* _deviceHwIdentifier;
	NSString* _deviceOsVersion;
	BOOL _isInternalInstall;
	BOOL _isInternalTool;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion;                 //@synthesize deviceOsVersion=_deviceOsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceHwIdentifier; 
@property (nonatomic,retain) NSString * deviceHwIdentifier;              //@synthesize deviceHwIdentifier=_deviceHwIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalTool; 
@property (assign,nonatomic) BOOL isInternalTool;                        //@synthesize isInternalTool=_isInternalTool - In the implementation block
@property (assign,nonatomic) BOOL hasIsInternalInstall; 
@property (assign,nonatomic) BOOL isInternalInstall;                     //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isInternalInstall;
-(void)setIsInternalTool:(BOOL)arg1 ;
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setDeviceHwIdentifier:(NSString *)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(void)setHasIsInternalTool:(BOOL)arg1 ;
-(BOOL)hasIsInternalTool;
-(void)setHasIsInternalInstall:(BOOL)arg1 ;
-(BOOL)hasIsInternalInstall;
-(BOOL)isInternalTool;
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasDeviceHwIdentifier;
-(NSString *)deviceOsVersion;
-(NSString *)deviceHwIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

