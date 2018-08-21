/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOPDPhoto;

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _author;
	NSString* _caption;
	NSString* _licenseDescription;
	NSString* _licenseUrl;
	GEOPDPhoto* _photo;
	BOOL _displayFullPhotoInline;
	BOOL _useGallery;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasCaption; 
@property (nonatomic,retain) NSString * caption;                             //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthor; 
@property (nonatomic,retain) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) BOOL hasLicenseDescription; 
@property (nonatomic,retain) NSString * licenseDescription;                  //@synthesize licenseDescription=_licenseDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLicenseUrl; 
@property (nonatomic,retain) NSString * licenseUrl;                          //@synthesize licenseUrl=_licenseUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo;                             //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayFullPhotoInline; 
@property (assign,nonatomic) BOOL displayFullPhotoInline;                    //@synthesize displayFullPhotoInline=_displayFullPhotoInline - In the implementation block
@property (assign,nonatomic) BOOL hasUseGallery; 
@property (assign,nonatomic) BOOL useGallery;                                //@synthesize useGallery=_useGallery - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)captionedPhotosForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPhoto;
-(GEOPDPhoto *)photo;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(NSString *)author;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(BOOL)displayFullPhotoInline;
-(BOOL)useGallery;
-(BOOL)hasUseGallery;
-(BOOL)hasDisplayFullPhotoInline;
-(NSString *)licenseUrl;
-(BOOL)hasLicenseUrl;
-(BOOL)hasCaption;
-(BOOL)hasAuthor;
-(BOOL)hasLicenseDescription;
-(void)setDisplayFullPhotoInline:(BOOL)arg1 ;
-(void)setHasDisplayFullPhotoInline:(BOOL)arg1 ;
-(void)setUseGallery:(BOOL)arg1 ;
-(void)setHasUseGallery:(BOOL)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setLicenseDescription:(NSString *)arg1 ;
-(void)setLicenseUrl:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

