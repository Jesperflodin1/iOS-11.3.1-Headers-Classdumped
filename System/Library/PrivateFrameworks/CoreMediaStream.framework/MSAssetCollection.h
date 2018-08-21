/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MSAsset, NSArray, NSDate, NSData;

@interface MSAssetCollection : NSObject <NSSecureCoding> {

	NSString* _assetCollectionID;
	NSString* _ctag;
	MSAsset* _masterAsset;
	NSArray* _derivedAssets;
	NSString* _fileName;
	BOOL _wasDeleted;
	NSDate* _serverUploadedDate;
	long long _initialFailureDate;

}

@property (nonatomic,retain) NSString * assetCollectionID;                   //@synthesize assetCollectionID=_assetCollectionID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                                //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) MSAsset * masterAsset;                          //@synthesize masterAsset=_masterAsset - In the implementation block
@property (nonatomic,__weak,readonly) NSData * masterAssetHash; 
@property (nonatomic,retain) NSArray * derivedAssets; 
@property (nonatomic,retain) NSString * fileName;                            //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                                //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) NSDate * serverUploadedDate;                    //@synthesize serverUploadedDate=_serverUploadedDate - In the implementation block
@property (assign,nonatomic) long long initialFailureDate;                   //@synthesize initialFailureDate=_initialFailureDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)assetCollectionID;
-(MSAsset *)masterAsset;
-(NSArray *)derivedAssets;
-(long long)initialFailureDate;
-(void)setInitialFailureDate:(long long)arg1 ;
-(NSData *)masterAssetHash;
-(NSString *)ctag;
-(BOOL)wasDeleted;
-(void)setCtag:(NSString *)arg1 ;
-(void)setDerivedAssets:(NSArray *)arg1 ;
-(void)setMasterAsset:(MSAsset *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(NSDate *)serverUploadedDate;
-(void)setServerUploadedDate:(NSDate *)arg1 ;
-(id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
-(void)setAssetCollectionID:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

