/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUColorSpace : NSObject {

	CGColorSpaceRef _CGColorSpace;

}

@property (nonatomic,readonly) CGColorSpaceRef CGColorSpace;              //@synthesize CGColorSpace=_CGColorSpace - In the implementation block
+(id)workingColorSpace;
+(id)colorSpaceFromVideoColorProperties:(id)arg1 ;
+(id)sRGBColorSpace;
+(id)genericGrayColorSpace;
+(id)_loadICCProfileDataWithIdentifier:(id)arg1 ;
+(id)sRGBLinearColorSpace;
+(id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3 ;
+(id)adobeRGBColorSpace;
+(id)genericRGBColorSpace;
+(id)genericRGBLinearColorSpace;
+(id)displayP3ColorSpace;
+(id)displayP3LinearColorSpace;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGColorSpaceRef)CGColorSpace;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithICCProfileData:(id)arg1 ;
@end

