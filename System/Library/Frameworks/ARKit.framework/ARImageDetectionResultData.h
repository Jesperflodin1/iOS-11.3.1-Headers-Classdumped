/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCamera, NSArray, NSString;

@interface ARImageDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding> {

	ARCamera* _currentCamera;
	NSArray* _detectedImages;
	SCD_Struct_AR18 _cameraTransformAtDetection;

}

@property (nonatomic,copy) ARCamera * currentCamera;                                  //@synthesize currentCamera=_currentCamera - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR18 cameraTransformAtDetection;              //@synthesize cameraTransformAtDetection=_cameraTransformAtDetection - In the implementation block
@property (nonatomic,retain) NSArray * detectedImages;                                //@synthesize detectedImages=_detectedImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)detectedImages;
-(void)setDetectedImages:(NSArray *)arg1 ;
-(void)setCameraTransformAtDetection:(SCD_Struct_AR18)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR18)arg1 referenceOriginTransform:(SCD_Struct_AR18)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(void)setCurrentCamera:(ARCamera *)arg1 ;
-(SCD_Struct_AR18)cameraTransformAtDetection;
-(ARCamera *)currentCamera;
@end

