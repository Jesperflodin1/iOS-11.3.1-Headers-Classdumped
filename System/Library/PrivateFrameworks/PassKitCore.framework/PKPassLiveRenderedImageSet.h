/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLiveRenderedImageSet : PKPassImageSet {

	PKImage* _diffuseMaterialPropertyImage;
	PKImage* _ambientMaterialPropertyImage;
	PKImage* _specularMaterialPropertyImage;
	PKImage* _normalMaterialPropertyImage;
	PKImage* _reflectiveMaterialPropertyImage;
	PKImage* _emissionMaterialPropertyImage;
	PKImage* _transparentMaterialPropertyImage;
	PKImage* _multiplyMaterialPropertyImage;
	PKImage* _displacementMaterialPropertyImage;
	PKImage* _ambientOcclusionMaterialPropertyImage;
	PKImage* _selfIlluminationMaterialPropertyImage;
	PKImage* _metalnessMaterialPropertyImage;
	PKImage* _roughnessMaterialPropertyImage;

}

@property (nonatomic,retain) PKImage * diffuseMaterialPropertyImage;                       //@synthesize diffuseMaterialPropertyImage=_diffuseMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * ambientMaterialPropertyImage;                       //@synthesize ambientMaterialPropertyImage=_ambientMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * specularMaterialPropertyImage;                      //@synthesize specularMaterialPropertyImage=_specularMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * normalMaterialPropertyImage;                        //@synthesize normalMaterialPropertyImage=_normalMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * reflectiveMaterialPropertyImage;                    //@synthesize reflectiveMaterialPropertyImage=_reflectiveMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * emissionMaterialPropertyImage;                      //@synthesize emissionMaterialPropertyImage=_emissionMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * transparentMaterialPropertyImage;                   //@synthesize transparentMaterialPropertyImage=_transparentMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * multiplyMaterialPropertyImage;                      //@synthesize multiplyMaterialPropertyImage=_multiplyMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * displacementMaterialPropertyImage;                  //@synthesize displacementMaterialPropertyImage=_displacementMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * ambientOcclusionMaterialPropertyImage;              //@synthesize ambientOcclusionMaterialPropertyImage=_ambientOcclusionMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * selfIlluminationMaterialPropertyImage;              //@synthesize selfIlluminationMaterialPropertyImage=_selfIlluminationMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * metalnessMaterialPropertyImage;                     //@synthesize metalnessMaterialPropertyImage=_metalnessMaterialPropertyImage - In the implementation block
@property (nonatomic,retain) PKImage * roughnessMaterialPropertyImage;                     //@synthesize roughnessMaterialPropertyImage=_roughnessMaterialPropertyImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setDiffuseMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setAmbientMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setSpecularMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setNormalMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setReflectiveMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setEmissionMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setTransparentMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setMultiplyMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setDisplacementMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setAmbientOcclusionMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setSelfIlluminationMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setMetalnessMaterialPropertyImage:(PKImage *)arg1 ;
-(void)setRoughnessMaterialPropertyImage:(PKImage *)arg1 ;
-(PKImage *)diffuseMaterialPropertyImage;
-(PKImage *)ambientMaterialPropertyImage;
-(PKImage *)specularMaterialPropertyImage;
-(PKImage *)normalMaterialPropertyImage;
-(PKImage *)reflectiveMaterialPropertyImage;
-(PKImage *)emissionMaterialPropertyImage;
-(PKImage *)transparentMaterialPropertyImage;
-(PKImage *)multiplyMaterialPropertyImage;
-(PKImage *)displacementMaterialPropertyImage;
-(PKImage *)ambientOcclusionMaterialPropertyImage;
-(PKImage *)selfIlluminationMaterialPropertyImage;
-(PKImage *)metalnessMaterialPropertyImage;
-(PKImage *)roughnessMaterialPropertyImage;
@end

