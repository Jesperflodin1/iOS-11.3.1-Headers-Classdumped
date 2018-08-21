/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPCryptoInfo;
@class NSString;

@interface TSPDataStorageWriteResult : NSObject {

	BOOL _didCopyDataToPackage;
	BOOL _isMissingData;
	NSString* _filename;
	id<TSPCryptoInfo> _encryptionInfo;

}

@property (nonatomic,readonly) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) id<TSPCryptoInfo> encryptionInfo;              //@synthesize encryptionInfo=_encryptionInfo - In the implementation block
@property (nonatomic,readonly) BOOL didCopyDataToPackage;                     //@synthesize didCopyDataToPackage=_didCopyDataToPackage - In the implementation block
@property (nonatomic,readonly) BOOL isMissingData;                            //@synthesize isMissingData=_isMissingData - In the implementation block
-(id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(BOOL)arg3 isMissingData:(BOOL)arg4 ;
-(BOOL)didCopyDataToPackage;
-(id)init;
-(NSString *)filename;
-(BOOL)isMissingData;
-(id<TSPCryptoInfo>)encryptionInfo;
@end

