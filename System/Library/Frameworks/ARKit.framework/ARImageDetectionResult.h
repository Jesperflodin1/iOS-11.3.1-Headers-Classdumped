/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <NSCopying, NSSecureCoding> {

	ARReferenceImage* _referenceImage;
	SCD_Struct_AR18 _transform;

}

@property (assign,nonatomic) SCD_Struct_AR18 transform;                      //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) ARReferenceImage * referenceImage;              //@synthesize referenceImage=_referenceImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(ARReferenceImage *)referenceImage;
-(void)setTransform:(SCD_Struct_AR18)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AR18)transform;
-(void)setReferenceImage:(ARReferenceImage *)arg1 ;
@end

