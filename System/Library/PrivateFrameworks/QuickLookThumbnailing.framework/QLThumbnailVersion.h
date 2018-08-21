/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {

	NSDate* _modificationDate;
	unsigned long long _fileSize;
	NSString* _generatorID;
	NSString* _generatorVersion;
	NSData* _versionIdentifier;

}

@property (copy) NSString * generatorID;                                                       //@synthesize generatorID=_generatorID - In the implementation block
@property (copy) NSString * generatorVersion;                                                  //@synthesize generatorVersion=_generatorVersion - In the implementation block
@property (copy) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSData * versionIdentifier;                                                   //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (assign) unsigned long long fileSize;                                                //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDefaultVersion,readonly) BOOL defaultVersion; 
@property (getter=isAutomaticallyGenerated,readonly) BOOL automaticallyGenerated; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(id)initWithFPItem:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(void)setGeneratorID:(NSString *)arg1 ;
-(void)setGeneratorVersion:(NSString *)arg1 ;
-(id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 generatorID:(id)arg4 generatorVersion:(id)arg5 ;
-(void)getGeneratorID:(id*)arg1 version:(id*)arg2 forContentType:(id)arg3 ;
-(id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(NSString *)generatorID;
-(NSString *)generatorVersion;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1 ;
-(BOOL)isAutomaticallyGenerated;
-(BOOL)isDefaultVersion;
-(void)setVersionIdentifier:(NSData *)arg1 ;
-(NSData *)versionIdentifier;
@end

