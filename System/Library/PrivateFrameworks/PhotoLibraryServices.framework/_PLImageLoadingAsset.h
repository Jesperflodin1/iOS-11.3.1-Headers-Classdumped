/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <NSObject>
@required
-(double)duration;
-(int)orientation;
-(short)kind;
-(BOOL)complete;
-(CGSize*)imageSize;
-(id)uuid;
-(BOOL)isVideo;
-(BOOL)hasLegacyAdjustments;
-(id)pathForFullsizeRenderImageFile;
-(short)savedAssetType;
-(id)pathForVideoPreviewFile;
-(id)pathForLargeThumbnailFile;
-(id)originalFileName;
-(void)generateLargeThumbnailFileIfNecessary;
-(short)kindSubtype;
-(id)thumbnailIdentifier;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(BOOL)isOriginalSRGB;
-(id)pathForAdjustedSRGBLargeThumbnailFile;
-(id)pathForNonAdjustedSRGBLargeThumbnailFile;
-(id)pathForSRGBLargeThumbnailFile;
-(id)pathForMediumThumbnailFile;
-(unsigned long long)localResourcesState;
-(id)pathForNonAdjustedFullsizeImageFile;
-(id)pathForPenultimateFullsizeRenderImageFile;
-(id)pathForPenultimateFullsizeRenderVideoFile;
-(id)pathForAdjustmentFile;
-(id)pathForSubstandardFullsizeRenderImageFile;
-(id)fileURLForFullsizeRenderVideo;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isLoopingVideo;
-(BOOL)isJPEG;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(id)fileURLForFullsizeRenderImage;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(BOOL)isStreamedVideo;
-(BOOL)isCloudSharedAsset;
-(long long)cloudPlaceholderKind;
-(BOOL)isRAW;
-(id)objectID;
-(BOOL)isCloudPlaceholder;
-(id)uniformTypeIdentifier;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)hasAdjustments;
-(id)pathForOriginalFile;
-(BOOL)isInFlight;

@end

