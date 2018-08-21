/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableObject.h>
#import <libobjc.A.dylib/INImageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface INImage : NSObject <INCacheableObject, INImageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSData* _imageData;
	NSURL* _uri;
	NSString* _name;
	NSString* _bundlePath;
	SCD_Struct_IN5 _imageSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@property (nonatomic,copy,readonly) NSString * _identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData;                      //@synthesize imageData=_imageData - In the implementation block
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri;                                   //@synthesize uri=_uri - In the implementation block
@property (setter=_setName:,nonatomic,copy) NSString * _name;                              //@synthesize name=_name - In the implementation block
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath;                  //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,setter=_setImageSize:,nonatomic) SCD_Struct_IN5 _imageSize;              //@synthesize imageSize=_imageSize - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 ;
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)imageWithImageData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 ;
+(id)imageWithURL:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)_name;
-(id)_description;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_setImageSize:(SCD_Struct_IN5)arg1 ;
-(NSURL *)_uri;
-(void)_setUri:(id)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(NSString *)_bundlePath;
-(void)_setBundlePath:(id)arg1 ;
-(id)_initWithData:(id)arg1 ;
-(id)_descriptionAtIndent:(unsigned long long)arg1 ;
-(NSData *)_imageData;
-(NSString *)cacheIdentifier;
-(NSString *)_identifier;
-(SCD_Struct_IN5)_imageSize;
@end

