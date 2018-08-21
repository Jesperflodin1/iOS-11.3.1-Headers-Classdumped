/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSString, NSArray, ICStoreFinanceItemMetadata, NSData;

@interface ICStoreFileAssetInfo : NSObject {

	NSDictionary* _responseDictionary;
	NSURL* _assetURL;
	NSString* _downloadKey;
	NSArray* _fairPlayInfoList;
	long long _flavorType;
	NSString* _fileExtension;
	unsigned long long _fileSize;
	ICStoreFinanceItemMetadata* _metadata;
	NSData* _md5;
	long long _expectedProtectionType;

}

@property (nonatomic,copy) NSURL * assetURL;                                   //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * downloadKey;                             //@synthesize downloadKey=_downloadKey - In the implementation block
@property (assign,nonatomic) long long expectedProtectionType;                 //@synthesize expectedProtectionType=_expectedProtectionType - In the implementation block
@property (nonatomic,copy) NSArray * fairPlayInfoList;                         //@synthesize fairPlayInfoList=_fairPlayInfoList - In the implementation block
@property (assign,nonatomic) long long flavorType;                             //@synthesize flavorType=_flavorType - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                           //@synthesize fileExtension=_fileExtension - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) ICStoreFinanceItemMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * md5;                                       //@synthesize md5=_md5 - In the implementation block
@property (nonatomic,readonly) long long protectionType; 
-(void)setMetadata:(ICStoreFinanceItemMetadata *)arg1 ;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
-(ICStoreFinanceItemMetadata *)metadata;
-(void)setDownloadKey:(NSString *)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(id)initWithFileAssetResponseDictionary:(id)arg1 ;
-(id)_metadataDictionary;
-(id)initWithAssetURL:(id)arg1 ;
-(void)setFairPlayInfoList:(NSArray *)arg1 ;
-(void)setMd5:(NSData *)arg1 ;
-(long long)expectedProtectionType;
-(void)setExpectedProtectionType:(long long)arg1 ;
-(long long)protectionType;
-(NSString *)downloadKey;
-(NSArray *)fairPlayInfoList;
-(long long)flavorType;
-(NSData *)md5;
-(void)setFlavorType:(long long)arg1 ;
-(NSURL *)assetURL;
@end
