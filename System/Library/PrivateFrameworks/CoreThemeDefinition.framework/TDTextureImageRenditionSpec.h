/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDTextureAsset, TDTextureMipLevel, TDThemeCompressionType, TDTextureRenditionSpec;

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) BOOL flipped; 
@property (nonatomic,retain) TDTextureAsset * asset; 
@property (nonatomic,retain) TDTextureMipLevel * textureLevelAssignment; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,readonly) TDTextureRenditionSpec * texture; 
@property (nonatomic,readonly) long long textureFormat; 
-(long long)textureFormat;
-(TDTextureRenditionSpec *)texture;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(int)_pixelFormatOfCGImage:(CGImageRef)arg1 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 ;
-(BOOL)isCubeMap;
-(id)textureFacesWithDocument:(id)arg1 ;
@end

