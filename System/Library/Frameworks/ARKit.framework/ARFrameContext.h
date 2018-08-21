/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultDataContext.h>

@class NSMutableArray, ARImageData, NSString;

@interface ARFrameContext : NSObject <ARResultDataContext> {

	NSMutableArray* _anchorsToAdd;
	NSMutableArray* _anchorsToRemove;
	BOOL _didRelocalize;
	BOOL _sessionTransformUpdated;
	BOOL _sessionTransformReset;
	BOOL _sessionTransformShouldResumeCameraHeading;
	BOOL _sessionTransformShouldResumeCameraPosition;
	BOOL _shouldRemoveExistingAnchors;
	ARImageData* _imageData;
	long long _worldAlignment;
	unsigned long long _frameDebugOptions;
	SCD_Struct_AR18 _relocalizationDeltaTransform;
	SCD_Struct_AR18 _sessionTransform;

}

@property (assign,nonatomic) BOOL didRelocalize;                                             //@synthesize didRelocalize=_didRelocalize - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR18 relocalizationDeltaTransform;                   //@synthesize relocalizationDeltaTransform=_relocalizationDeltaTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR18 sessionTransform;                               //@synthesize sessionTransform=_sessionTransform - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformUpdated;                                 //@synthesize sessionTransformUpdated=_sessionTransformUpdated - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformReset;                                   //@synthesize sessionTransformReset=_sessionTransformReset - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformShouldResumeCameraHeading;               //@synthesize sessionTransformShouldResumeCameraHeading=_sessionTransformShouldResumeCameraHeading - In the implementation block
@property (nonatomic,readonly) BOOL sessionTransformShouldResumeCameraPosition;              //@synthesize sessionTransformShouldResumeCameraPosition=_sessionTransformShouldResumeCameraPosition - In the implementation block
@property (nonatomic,readonly) BOOL shouldRemoveExistingAnchors;                             //@synthesize shouldRemoveExistingAnchors=_shouldRemoveExistingAnchors - In the implementation block
@property (nonatomic,retain) ARImageData * imageData;                                        //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) long long worldAlignment;                                       //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long frameDebugOptions;                           //@synthesize frameDebugOptions=_frameDebugOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageData:(ARImageData *)arg1 ;
-(long long)cameraPosition;
-(void)setWorldAlignment:(long long)arg1 ;
-(ARImageData *)imageData;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)anchorsToRemove;
-(long long)worldAlignment;
-(unsigned long long)frameDebugOptions;
-(void)setFrameDebugOptions:(unsigned long long)arg1 ;
-(id)anchorsToAdd;
-(void)setSessionTransform:(SCD_Struct_AR18)arg1 ;
-(void)resetSessionTransform;
-(void)resumeSessionCameraPosition;
-(void)resumeSessionCameraPositionAndHeading;
-(void)addAnchor:(id)arg1 ;
-(void)clearAddedAnchors;
-(void)removeAnchor:(id)arg1 ;
-(BOOL)didRelocalize;
-(void)setDidRelocalize:(BOOL)arg1 ;
-(SCD_Struct_AR18)relocalizationDeltaTransform;
-(void)setRelocalizationDeltaTransform:(SCD_Struct_AR18)arg1 ;
-(SCD_Struct_AR18)sessionTransform;
-(BOOL)sessionTransformUpdated;
-(BOOL)sessionTransformReset;
-(BOOL)sessionTransformShouldResumeCameraHeading;
-(BOOL)sessionTransformShouldResumeCameraPosition;
-(BOOL)shouldRemoveExistingAnchors;
@end

