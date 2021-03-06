/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_AV2 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) BOOL providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (getter=_mediaSelectionGroupDictionaries,nonatomic,readonly) NSArray * mediaSelectionGroupDictionaries; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (getter=isCompatibleWithAirPlayVideo,nonatomic,readonly) BOOL compatibleWithAirPlayVideo; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) BOOL canContainFragments; 
@property (nonatomic,readonly) BOOL containsFragments; 
@property (nonatomic,readonly) SCD_Struct_AV2 overallDurationHint; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
@property (nonatomic,readonly) NSString * identifyingTag; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (nonatomic,readonly) NSArray * availableVideoDynamicRanges; 
@property (getter=_instanceIdentifier,nonatomic,readonly) NSString * instanceIdentifier; 
@property (nonatomic,readonly) BOOL supportsAnalysisReporting; 
@property (getter=_assetAnalysisMessages,nonatomic,readonly) NSArray * assetAnalysisMessages; 
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGSize)maximumVideoResolution;
-(NSArray *)availableVideoDynamicRanges;
-(BOOL)providesPreciseDurationAndTiming;
-(NSArray *)alternateTrackGroups;
-(NSArray *)trackIDs;
-(id)_mediaSelectionGroupDictionaries;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV2)overallDurationHint;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(NSString *)identifyingTagClass;
-(NSString *)identifyingTag;
-(NSData *)SHA1Digest;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(SCD_Struct_AV2)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(NSArray *)commonMetadata;
-(id)propertyListForProxy;
-(NSString *)lyrics;
-(NSDictionary *)trackReferences;
-(long long)trackCount;
-(float)preferredRate;
-(AVMetadataItem *)creationDate;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(BOOL)isPlayable;
-(id)_instanceIdentifier;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isReadable;
-(BOOL)hasProtectedContent;
-(NSArray *)availableMetadataFormats;
-(int)naturalTimeScale;
@end

