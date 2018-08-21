/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {

	NSData* _data;
	NSData* _encryptedData;

}

@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * encryptedData;                  //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,readonly) BOOL needsEncryption; 
@property (nonatomic,readonly) BOOL needsDecryption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)value;
-(id)initWithValue:(id)arg1 ;
-(BOOL)needsDecryption;
-(BOOL)needsEncryption;
-(id)CKPropertiesDescription;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)initWithEncryptedData:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
@end

