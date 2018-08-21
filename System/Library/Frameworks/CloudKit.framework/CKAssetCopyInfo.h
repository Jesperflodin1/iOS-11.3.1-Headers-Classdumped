/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSString;

@interface CKAssetCopyInfo : NSObject <NSSecureCoding> {

	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSData* _assetKey;
	NSURL* _assetURL;
	NSString* _senderID;

}

@property (nonatomic,copy) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSData * assetKey;                        //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                         //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * senderID;                      //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)senderID;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setSenderID:(NSString *)arg1 ;
-(NSURL *)assetURL;
-(NSData *)assetKey;
-(void)setAssetKey:(NSData *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
@end

