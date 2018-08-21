/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, NSData;

@interface CKDWrappingContext : NSObject {

	CKRecordID* _recordID;
	NSString* _fieldName;
	NSData* _fileSignature;
	NSData* _referenceSignature;

}

@property (nonatomic,retain) CKRecordID * recordID;                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(CKRecordID *)recordID;
-(id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)assetContextString;
-(id)encryptedDataContextString;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

