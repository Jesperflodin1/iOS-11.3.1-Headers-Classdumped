/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class PHAsset;

@interface _NTKNewPhoto : NSObject {

	PHAsset* _asset;
	unsigned long long _subsampleFactor;
	CGRect _crop;

}

@property (nonatomic,retain) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGRect crop;                                     //@synthesize crop=_crop - In the implementation block
@property (assign,nonatomic) unsigned long long subsampleFactor;              //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setCrop:(CGRect)arg1 ;
-(CGRect)crop;
-(unsigned long long)subsampleFactor;
-(void)setSubsampleFactor:(unsigned long long)arg1 ;
@end
