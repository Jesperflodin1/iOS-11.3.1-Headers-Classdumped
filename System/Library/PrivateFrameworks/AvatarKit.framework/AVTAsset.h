/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AVTAssetInfo, NSArray, SCNNode;

@interface AVTAsset : NSObject {

	NSString* _bundlePath;
	AVTAssetInfo* _assetVariants[2][3];
	NSArray* _morphVariants;
	long long _type;
	NSString* _uid;
	unsigned long long _numberOfEditableColor;
	unsigned long long _numberOfModularElements;
	unsigned long long _refCount;
	SCNNode* _assetCache[2][3];

}

@property (readonly) long long type;                                          //@synthesize type=_type - In the implementation block
@property (readonly) NSString * uid;                                          //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long numberOfEditableColor;                //@synthesize numberOfEditableColor=_numberOfEditableColor - In the implementation block
@property (readonly) NSArray * morphVariants;                                 //@synthesize morphVariants=_morphVariants - In the implementation block
@property (readonly) unsigned long long numberOfModularElements;              //@synthesize numberOfModularElements=_numberOfModularElements - In the implementation block
-(long long)type;
-(id)bundlePath;
-(NSString *)uid;
-(void)setBundlePath:(id)arg1 ;
-(void)freeCache;
-(long long)closestQualityOf:(long long)arg1 variant:(long long)arg2 ;
-(id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3 ;
-(void)incrUseCount;
-(void)decrUseCount;
-(id)componentPathWithAssetInfo:(id)arg1 ;
-(id)assetInfoWithVariant:(long long)arg1 quality:(long long)arg2 ;
-(id)assetCacheWithVariant:(long long)arg1 quality:(long long)arg2 ;
-(void)setAssetCache:(id)arg1 withVariant:(long long)arg2 quality:(long long)arg3 ;
-(unsigned long long)numberOfEditableColor;
-(unsigned long long)numberOfModularElements;
-(NSArray *)morphVariants;
@end

