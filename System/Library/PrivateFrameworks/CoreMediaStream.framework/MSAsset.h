/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/MMCSAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSError, NSDate, NSDictionary, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying> {

	BOOL _assetDataAvailableOnServer;
	NSData* _masterAssetHash;
	NSDictionary* _metadata;
	NSString* _path;
	NSURL* _MMCSURL;
	NSData* _fileData;
	NSError* _error;
	NSString* _type;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;
	NSString* _MMCSAccessHeader;
	NSDate* _MMCSAccessHeaderTimeStamp;
	NSString* _MMCSReceipt;
	NSString* _GUID;
	NSString* _assetCollectionGUID;
	NSDate* _batchCreationDate;
	NSDate* _photoCreationDate;
	id _userInfo;
	unsigned long long _mediaAssetType;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;                       //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSData * masterAssetHash;                         //@synthesize masterAssetHash=_masterAssetHash - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSURL * MMCSURL;                                  //@synthesize MMCSURL=_MMCSURL - In the implementation block
@property (nonatomic,retain) NSData * fileData;                                //@synthesize fileData=_fileData - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                   //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (nonatomic,retain) NSDate * batchCreationDate;                       //@synthesize batchCreationDate=_batchCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * photoCreationDate;                       //@synthesize photoCreationDate=_photoCreationDate - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAssetType;                //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
@property (assign,nonatomic) BOOL assetDataAvailableOnServer;                  //@synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer - In the implementation block
@property (nonatomic,retain) NSData * fileHash; 
@property (nonatomic,retain) NSString * type; 
@property (assign,nonatomic) unsigned long long protocolFileSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * MMCSUTI;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemID; 
@property (nonatomic,retain) NSData * MMCSHash;                                //@synthesize fileHash=_fileHash - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemSize;                  //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (nonatomic,retain) NSError * MMCSError; 
@property (nonatomic,retain) NSString * MMCSAccessHeader;                      //@synthesize MMCSAccessHeader=_MMCSAccessHeader - In the implementation block
@property (nonatomic,retain) NSDate * MMCSAccessHeaderTimeStamp;               //@synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp - In the implementation block
@property (nonatomic,retain) NSString * MMCSReceipt;                           //@synthesize MMCSReceipt=_MMCSReceipt - In the implementation block
@property (assign,nonatomic) unsigned MMCSItemFlags; 
+(BOOL)supportsSecureCoding;
+(id)asset;
+(id)assetWithAsset:(id)arg1 ;
+(id)MSASPAssetFromProtocolDictionary:(id)arg1 ;
-(unsigned long long)_fileSize;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)userInfo;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)isVideo;
-(NSDictionary *)metadata;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(NSData *)fileData;
-(NSData *)masterAssetHash;
-(unsigned long long)_fileSizeOnDisk;
-(void)setMMCSAccessHeader:(NSString *)arg1 ;
-(NSString *)MMCSAccessHeader;
-(NSData *)MMCSHash;
-(void)setMMCSHash:(NSData *)arg1 ;
-(NSString *)MMCSUTI;
-(void)setMMCSUTI:(NSString *)arg1 ;
-(unsigned long long)MMCSItemSize;
-(void)setMMCSItemSize:(unsigned long long)arg1 ;
-(NSURL *)MMCSURL;
-(void)setMMCSURL:(NSURL *)arg1 ;
-(void)setFileData:(NSData *)arg1 ;
-(NSDate *)MMCSAccessHeaderTimeStamp;
-(void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2 ;
-(NSString *)MMCSReceipt;
-(void)setMMCSReceipt:(NSString *)arg1 ;
-(NSDate *)batchCreationDate;
-(void)setBatchCreationDate:(NSDate *)arg1 ;
-(NSDate *)photoCreationDate;
-(void)setPhotoCreationDate:(NSDate *)arg1 ;
-(BOOL)assetDataAvailableOnServer;
-(void)setAssetDataAvailableOnServer:(BOOL)arg1 ;
-(int)MMCSOpenNewFileDescriptor;
-(id)MMCSItemType;
-(unsigned long long)MMCSItemID;
-(void)setMMCSItemID:(unsigned long long)arg1 ;
-(NSError *)MMCSError;
-(void)setMMCSError:(NSError *)arg1 ;
-(void)setMMCSAccessHeaderTimeStamp:(NSDate *)arg1 ;
-(unsigned)MMCSItemFlags;
-(void)setMMCSItemFlags:(unsigned)arg1 ;
-(unsigned long long)protocolFileSize;
-(id)MSASPProtocolDictionary;
-(NSData *)fileHash;
-(void)setMasterAssetHash:(NSData *)arg1 ;
-(void)setFileHash:(NSData *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setMediaAssetType:(unsigned long long)arg1 ;
-(unsigned long long)mediaAssetType;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(NSString *)assetCollectionGUID;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)isPhoto;
-(id)initWithGUID:(id)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(void)addMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)GUID;
@end

