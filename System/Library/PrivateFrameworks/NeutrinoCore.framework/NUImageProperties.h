/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSString;


@protocol NUImageProperties <NSObject>
@property (readonly) NSDictionary * metadata; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) SCD_Struct_NU5 size; 
@property (readonly) long long orientation; 
@property (readonly) NSString * fileUTI; 
@property (readonly) long long alphaInfo; 
@property (readonly) long long componentInfo; 
@property (readonly) id<NUDepthProperties> depthProperties; 
@property (readonly) id<NURAWImageProperties> rawProperties; 
@required
-(SCD_Struct_NU5)size;
-(long long)orientation;
-(CGColorSpaceRef)colorSpace;
-(NSDictionary *)metadata;
-(NSString *)fileUTI;
-(id<NUDepthProperties>)depthProperties;
-(id<NURAWImageProperties>)rawProperties;
-(long long)alphaInfo;
-(long long)componentInfo;

@end

