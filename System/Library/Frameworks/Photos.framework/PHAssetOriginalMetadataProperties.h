/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {

	short _originalExifOrientation;
	NSString* _originalAssetsUUID;
	long long _originalHeight;
	long long _originalWidth;
	NSString* _originalFilename;
	unsigned long long _originalFilesize;

}

@property (nonatomic,readonly) NSString * originalAssetsUUID;                    //@synthesize originalAssetsUUID=_originalAssetsUUID - In the implementation block
@property (nonatomic,readonly) long long originalHeight;                         //@synthesize originalHeight=_originalHeight - In the implementation block
@property (nonatomic,readonly) long long originalWidth;                          //@synthesize originalWidth=_originalWidth - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) short originalExifOrientation;                    //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFilesize;              //@synthesize originalFilesize=_originalFilesize - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)originalAssetsUUID;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(unsigned long long)originalFilesize;
-(short)originalExifOrientation;
-(long long)originalWidth;
-(long long)originalHeight;
-(NSString *)originalFilename;
@end

