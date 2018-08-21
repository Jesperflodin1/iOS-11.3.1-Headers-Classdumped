/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL, NTKPhotoAnalysis;

@interface NTKPhoto : NSObject <NSCopying> {

	BOOL _isIris;
	NSString* _localIdentifier;
	NSDate* _modificationDate;
	NSURL* _imageURL;
	NTKPhotoAnalysis* _topAnalysis;
	NTKPhotoAnalysis* _bottomAnalysis;
	NSURL* _irisVideoURL;
	double _irisDuration;
	double _irisStillDisplayTime;
	CGRect _originalCrop;
	CGRect _crop;

}

@property (nonatomic,copy) NSString * localIdentifier;                                             //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) CGRect originalCrop;                                                  //@synthesize originalCrop=_originalCrop - In the implementation block
@property (nonatomic,readonly) NSString * uuidFromLocalIdentifierAndModificationDate; 
@property (nonatomic,copy) NSURL * imageURL;                                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) CGRect crop;                                                          //@synthesize crop=_crop - In the implementation block
@property (nonatomic,copy) NTKPhotoAnalysis * topAnalysis;                                         //@synthesize topAnalysis=_topAnalysis - In the implementation block
@property (nonatomic,copy) NTKPhotoAnalysis * bottomAnalysis;                                      //@synthesize bottomAnalysis=_bottomAnalysis - In the implementation block
@property (assign,nonatomic) BOOL isIris;                                                          //@synthesize isIris=_isIris - In the implementation block
@property (nonatomic,copy) NSURL * irisVideoURL;                                                   //@synthesize irisVideoURL=_irisVideoURL - In the implementation block
@property (assign,nonatomic) double irisDuration;                                                  //@synthesize irisDuration=_irisDuration - In the implementation block
@property (assign,nonatomic) double irisStillDisplayTime;                                          //@synthesize irisStillDisplayTime=_irisStillDisplayTime - In the implementation block
+(id)decodeFromDictionary:(id)arg1 forResourceDirectory:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(double)irisStillDisplayTime;
-(BOOL)isIris;
-(id)encodeAsDictionary;
-(void)setOriginalCrop:(CGRect)arg1 ;
-(void)setCrop:(CGRect)arg1 ;
-(void)setTopAnalysis:(NTKPhotoAnalysis *)arg1 ;
-(void)setBottomAnalysis:(NTKPhotoAnalysis *)arg1 ;
-(void)setIsIris:(BOOL)arg1 ;
-(void)setIrisVideoURL:(NSURL *)arg1 ;
-(void)setIrisDuration:(double)arg1 ;
-(void)setIrisStillDisplayTime:(double)arg1 ;
-(CGRect)crop;
-(BOOL)isEqualToPhoto:(id)arg1 ;
-(BOOL)isEqualToAsset:(id)arg1 ;
-(NSString *)uuidFromLocalIdentifierAndModificationDate;
-(CGRect)originalCrop;
-(NTKPhotoAnalysis *)topAnalysis;
-(NTKPhotoAnalysis *)bottomAnalysis;
-(NSURL *)irisVideoURL;
-(double)irisDuration;
-(id)initWithLegacySidecar:(id)arg1 ;
@end

