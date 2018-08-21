/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNImageprint, NSString, NSUUID, NSData;

@interface VNImageprintObservation : VNObservation {

	BOOL _imageprintValid;
	VNImageprint* _imageprint;
	NSString* _imageprintVersion;

}

@property (nonatomic,retain) VNImageprint * imageprint;                        //@synthesize imageprint=_imageprint - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,readonly) BOOL imageprintValid;                           //@synthesize imageprintValid=_imageprintValid - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageprintVersion;              //@synthesize imageprintVersion=_imageprintVersion - In the implementation block
@property (nonatomic,readonly) NSData * rawImageprintDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)observationWithImageprint:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageprint:(VNImageprint *)arg1 ;
-(VNImageprint *)imageprint;
-(float)calculateDistanceFromImageprintObservation:(id)arg1 ;
-(BOOL)isImageprintValid;
-(id)initWithRawImageprintDescriptor:(id)arg1 ;
-(NSData *)rawImageprintDescriptor;
-(BOOL)imageprintValid;
-(NSString *)imageprintVersion;
@end

